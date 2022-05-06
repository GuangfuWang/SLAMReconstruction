
#ifndef SLAMRECONSTRUCTION_ORBTRACKER_H
#define SLAMRECONSTRUCTION_ORBTRACKER_H

#include <opencv2/features2d.hpp>
#include "Tracker.h"

namespace gf {
    class OrbTracker final : public Tracker {
    public:

        OrbTracker(const unsigned int &nFeatures = 600,
                   const float &scaleFactor = 1.2f,
                   const unsigned int &nPyramid = 8,
                   const unsigned int &edgeThreshold = 31,
                   const int &sourceImgToPyramidLevel = 0,
                   const int &wta_k = 2,
                   const cv::ORB::ScoreType &sType = cv::ORB::HARRIS_SCORE,
                   const unsigned int &fastThreshold = 20,
                   const cv::DescriptorMatcher::MatcherType &matcherType = cv::DescriptorMatcher::FLANNBASED);

        void detectKeyPoints(const cv::Mat &sourceImg, Vector<cv::KeyPoint> &dstKeyPoints) override;

        void computeDescriptors(const cv::Mat &sourceImg, Vector<cv::KeyPoint> &keyPoints,
                                cv::OutputArray &descriptors) override;

        void detectAndComputeDescriptors(const cv::Mat &sourceImg,
                                         Vector<cv::KeyPoint> &keyPoints,
                                         cv::OutputArray &descriptors) override;

        void track(const cv::Mat &img1, const cv::Mat &img2, cv::Mat &currentPose) override;

    private:
        static cv::Ptr<cv::ORB>               mOrbTracker;
        static cv::Ptr<cv::DescriptorMatcher> mMatcher;

        Vector<cv::DMatch>   mTempMatches;
        Vector<cv::DMatch>   mTempGoodMatches;
        Vector<cv::KeyPoint> mTempFirst;
        Vector<cv::KeyPoint> mTempSecond;
        cv::Mat              firstDescriptors;
        cv::Mat              secondDescriptors;
        float                mMatchesDistanceThreshold = 0.18f;

        float       focalLen        = 521.0f;
        cv::Point2d mPrinciplePoint = {325.1, 249.7};

    };

}


#endif //SLAMRECONSTRUCTION_ORBTRACKER_H
