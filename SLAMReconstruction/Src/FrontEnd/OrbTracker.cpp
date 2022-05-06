
#include <cmath>
#include <omp.h>
#include <opencv2/sfm/fundamental.hpp>
#include "OrbTracker.h"

namespace gf {
    cv::Ptr<cv::ORB>               OrbTracker::mOrbTracker = nullptr;
    cv::Ptr<cv::DescriptorMatcher> OrbTracker::mMatcher    = nullptr;

    OrbTracker::OrbTracker(const unsigned int &nFeatures, const float &scaleFactor,
                           const unsigned int &nPyramid, const unsigned int &edgeThreshold,
                           const int &sourceImgToPyramidLevel, const int &wta_k,
                           const cv::ORB::ScoreType &sType, const unsigned int &fastThreshold,
                           const cv::DescriptorMatcher::MatcherType &matcherType) {
        mType       = TrackerType::Orb;
        mOrbTracker = cv::ORB::create(nFeatures, scaleFactor, nPyramid,
                                      edgeThreshold, sourceImgToPyramidLevel, wta_k,
                                      sType, edgeThreshold, fastThreshold);
        mMatcher    = cv::DescriptorMatcher::create(matcherType);
    }

    void OrbTracker::detectKeyPoints(const cv::Mat &sourceImg, Vector<cv::KeyPoint> &dstKeyPoints) {
        mOrbTracker->detect(sourceImg, dstKeyPoints);
    }

    void OrbTracker::computeDescriptors(const cv::Mat &sourceImg, Vector<cv::KeyPoint> &keyPoints,
                                        cv::OutputArray &descriptors) {
        mOrbTracker->compute(sourceImg, keyPoints, descriptors);
    }

    void OrbTracker::detectAndComputeDescriptors(const cv::Mat &sourceImg,
                                                 Vector<cv::KeyPoint> &keyPoints,
                                                 cv::OutputArray &descriptors) {
        detectKeyPoints(sourceImg, keyPoints);
        computeDescriptors(sourceImg, keyPoints, descriptors);
    }

    void OrbTracker::track(const cv::Mat &img1, const cv::Mat &img2, cv::Mat &currentPose) {
        firstDescriptors  = cv::Mat();
        secondDescriptors = cv::Mat();
        detectAndComputeDescriptors(img1, mTempFirst, firstDescriptors);
        detectAndComputeDescriptors(img2, mTempSecond, secondDescriptors);
        mMatcher->match(firstDescriptors, secondDescriptors, mTempMatches);
        float maxDist = std::numeric_limits<float>::min();
#pragma omp parallel for reduction(max:maxDist)
        for (int i = 0; i < mTempMatches.size(); ++i) {
            maxDist = std::max(maxDist, mTempMatches[i].distance);
        }

#pragma omp parallel for
        for (int j = 0; j < mTempMatches.size(); ++j) {
            if (mTempMatches[j].distance < mMatchesDistanceThreshold * maxDist) {
                mTempGoodMatches.emplace_back(mTempMatches[j]);
            }
        }

        Vector<cv::Point2f> firstKeyPoints;
        Vector<cv::Point2f> secondKeyPoints;
#pragma omp parallel for
        for (int k = 0; k < mTempGoodMatches.size(); ++k) {
            firstKeyPoints.emplace_back(mTempFirst[mTempGoodMatches[k].queryIdx].pt);
            secondKeyPoints.emplace_back(mTempSecond[mTempGoodMatches[k].trainIdx].pt);
        }

        cv::Mat R=cv::Mat(3,3,CV_32F);
        cv::Mat t=cv::Mat(3,1,CV_32F);
        float   scale = 0.0f;
        cv::sfm::computeOrientation(firstKeyPoints, secondKeyPoints, R, t, scale);
        currentPose = cv::Mat::eye(4, 4, CV_32F);
        currentPose.at<float>(0, 0) = R.at<float>(0, 0);
        currentPose.at<float>(0, 1) = R.at<float>(0, 1);
        currentPose.at<float>(0, 2) = R.at<float>(0, 2);
        currentPose.at<float>(1, 0) = R.at<float>(1, 0);
        currentPose.at<float>(1, 1) = R.at<float>(1, 1);
        currentPose.at<float>(1, 2) = R.at<float>(1, 2);
        currentPose.at<float>(2, 0) = R.at<float>(2, 0);
        currentPose.at<float>(2, 1) = R.at<float>(2, 1);
        currentPose.at<float>(2, 2) = R.at<float>(2, 2);

        currentPose.at<float>(0, 3) = t.at<float>(0, 0);
        currentPose.at<float>(1, 3) = t.at<float>(1, 0);
        currentPose.at<float>(2, 3) = t.at<float>(2, 0);

    }


}

