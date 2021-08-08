#include "disparity.hpp"

namespace disparity{
    cv::Mat& getDisparityMap(cv::Mat &_grayLeftImg, cv::Mat &_grayRightImg, cv::Mat &_outDispImg32F)
    {
        cv::Mat imgDisparity16S = cv::Mat(_grayLeftImg.rows, _grayLeftImg.cols, CV_16S);
        /*
        Output disparity map. It has the same size as the input images.
        Some algorithms, like StereoBM or StereoSGBM compute 16-bit fixed-point disparity map (where each disparity value has 4 fractional bits),
        whereas other algorithms output 32-bit floating-point disparity map.
        */
        stereo->compute(_grayLeftImg, _grayRightImg, imgDisparity16S);
        // Converting disparity values to CV_8U from CV_16S
        imgDisparity16S.convertTo(_outDispImg32F, CV_32F, 1.0);
        //Scaling down the disparity values and normalizing them 
        _outDispImg32F = (_outDispImg32F/16.0f - (float)minDisparity)/((float)numDisparities);
        return _outDispImg32F;
    }
}