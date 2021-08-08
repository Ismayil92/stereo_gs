#ifndef DISPARITY_HPP
#define DISPARITY_HPP

#include "opencv2/opencv.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/calib3d/calib3d.hpp"

namespace disparity{
    // initialize values for StereoSGBM parameters
    static int minDisparity = 0;
    static int numDisparities = 64;
    static int blockSize = 8;
    static int disp12MaxDiff = 1;
    static int uniquenessRatio = 10;
    static int speckleWindowSize = 10;
    static int speckleRange = 8;
    static int preFilterCap = 31;

    // Create an object for StereoSGBM algorithm 
    static cv::Ptr<cv::StereoSGBM> stereo = cv::StereoSGBM::create(minDisparity, numDisparities, blockSize, disp12MaxDiff, uniquenessRatio, speckleWindowSize, speckleRange);
    // Get Disparity Image 
    cv::Mat& getDisparityMap(cv::Mat&, cv::Mat&, cv::Mat&);
}

#endif