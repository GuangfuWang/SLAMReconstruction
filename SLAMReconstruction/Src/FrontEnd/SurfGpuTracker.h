
#ifndef SLAMRECONSTRUCTION_SURFGPUTRACKER_H
#define SLAMRECONSTRUCTION_SURFGPUTRACKER_H
#include "Tracker.h"

namespace gf{
    class SurfGpuTracker final:public Tracker {
    public:
        void detectKeyPoints(const cv::Mat &sourceImg, Vector<cv::KeyPoint> &dstKeyPoints) override;

        void computeDescriptors(const cv::Mat &sourceImg, Vector<cv::KeyPoint> &keyPoints,
                                cv::OutputArray &descriptors) override ;

        void detectAndComputeDescriptors(const cv::Mat &sourceImg, Vector<cv::KeyPoint> &keyPoints,
                                         cv::OutputArray &descriptors) override ;

        void track(const cv::Mat &img1, const cv::Mat &img2,cv::Mat& currentPose) override ;
    };
}



#endif //SLAMRECONSTRUCTION_SURFGPUTRACKER_H
