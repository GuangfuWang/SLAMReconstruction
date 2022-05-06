#ifndef SLAMRECONSTRUCTION_ORBGPUTRACKER_H
#define SLAMRECONSTRUCTION_ORBGPUTRACKER_H
#include <opencv2/features2d.hpp>
#include "Tracker.h"

namespace gf {
    class OrbGpuTracker final : public Tracker {
    public:
        void detectKeyPoints(const cv::Mat &sourceImg, Vector<cv::KeyPoint> &dstKeyPoints) override;

        void computeDescriptors(const cv::Mat &sourceImg, Vector<cv::KeyPoint> &keyPoints,
                                cv::OutputArray &descriptors) override;

        void detectAndComputeDescriptors(const cv::Mat &sourceImg, Vector<cv::KeyPoint> &keyPoints,
                                         cv::OutputArray &descriptors) override;

        void track(const cv::Mat &img1, const cv::Mat &img2,cv::Mat& currentPose) override;

    private:
        static cv::Ptr<cv::ORB> mTracker;
    };
}


#endif //SLAMRECONSTRUCTION_ORBGPUTRACKER_H
