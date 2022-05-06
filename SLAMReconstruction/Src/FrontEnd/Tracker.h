#ifndef SLAMRECONSTRUCTION_TRACKER_H
#define SLAMRECONSTRUCTION_TRACKER_H

#include <opencv2/core.hpp>
#include <vector>
#include "Utils/Util"

namespace gf {
    class Tracker {
    public:
        enum class TrackerType {
            Orb     = 0,
            Surf    = 1,
            OrbGpu  = 2,
            SurfGpu = 3,
            Default = INT_MAX
        };
    public:
        virtual ~Tracker() {}

        SharedRef<Tracker> createTracker(const TrackerType &trackerType = TrackerType::Orb);

        virtual void detectKeyPoints(const cv::Mat &sourceImg, Vector<cv::KeyPoint> &dstKeyPoints) = 0;

        virtual void computeDescriptors(const cv::Mat &sourceImg, Vector<cv::KeyPoint> &keyPoints,
                                        cv::OutputArray &descriptors) = 0;

        virtual void detectAndComputeDescriptors(const cv::Mat &sourceImg, Vector<cv::KeyPoint> &keyPoints,
                                                 cv::OutputArray &descriptors) = 0;

        virtual void track(const cv::Mat &img1, const cv::Mat &img2,cv::Mat& currentPose) = 0;

    protected:
        Tracker() {}

        Tracker(const Tracker &copy) {}

        void operator=(const Tracker &copy) {}

    protected:
        TrackerType mType;


    private:
        static Tracker *tracker;
    };
}


#endif //SLAMRECONSTRUCTION_TRACKER_H
