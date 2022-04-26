#ifndef SLAMRECONSTRUCTION_TRACKER_H
#define SLAMRECONSTRUCTION_TRACKER_H

#include <opencv2/core.hpp>
#include <vector>

using std::vector;

namespace gf {
    class Tracker {
    public:
        enum class TrackerType {
            ORB = 0,
            SURF,
            ORB_GPU,
            SURF_GPU
        };
    public:
        virtual ~Tracker() {}

    protected:
        TrackerType          mType;
        cv::Mat              mSourceImg;
        cv::Mat              mDstImg;
        cv::Mat              mVisualPose;
        vector<cv::KeyPoint> mKeyPoints;

    };
}


#endif //SLAMRECONSTRUCTION_TRACKER_H
