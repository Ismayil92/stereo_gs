#include <stdio.h>
#include <stdlib.h> 
#include <string>
#include <jsoncpp/json/json.h> // to parse configuration parameters
#include <fstream>
#include "opencv2/opencv.hpp"
#include "camera_config.hpp"
#include "disparity.hpp"
#include "main_window.hpp"
#include <QtWidgets/QApplication>


void showFrame(cv::Mat &_frm, QGraphicsPixmapItem &_pixmap)
{
    if(!_frm.empty())
        {
            QImage qimg(_frm.data,
                        _frm.cols,
                        _frm.rows,
                        _frm.step,
                        QImage::Format_RGB888);
            _pixmap.setPixmap(QPixmap::fromImage(qimg.rgbSwapped())); 
            //->fitInView(w->pixmap_left, Qt::KeepAspectRatio);       
        }
}
void showFrameGrayScale(cv::Mat &_frm, QGraphicsPixmapItem &_pixmap)
{
    if(!_frm.empty())
        {
            QImage qimg(_frm.data,
                        _frm.cols,
                        _frm.rows,
                        _frm.step,
                        QImage::Format_Indexed8);
            _pixmap.setPixmap(QPixmap::fromImage(qimg)); 
            //->fitInView(w->pixmap_left, Qt::KeepAspectRatio);       
        }
}

camConfigJson jsonReader(const std::string _config_file_path, const int _CONF_ID)
{   camConfigJson _config_params;    
    std::ifstream config_doc(_config_file_path, std::ifstream::binary);
    Json::Value root; 
    Json::CharReaderBuilder rbuilder;
    std::string errs;
    bool parsingSuccessful = Json::parseFromStream(rbuilder, config_doc, &root, &errs);
    if(!parsingSuccessful)
    {
        std::cout << "Failed to parse configuration\n"<<errs<<std::endl;
        std::exit(1);
    }

    const Json::Value& root_node = root["configurations"];    
    _config_params.capture_width = root_node[_CONF_ID]["capture_width"].asInt();
    _config_params.capture_height = root_node[_CONF_ID]["capture_height"].asInt();
    _config_params.display_width = root_node[_CONF_ID]["display_width"].asInt();
    _config_params.display_height = root_node[_CONF_ID]["display_height"].asInt();
    _config_params.frame_rate = root_node[_CONF_ID]["frame_rate"].asInt();
    _config_params.flip_method = ROTATE_180;

    return _config_params;
}


int main(int argc, char** argv) 
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    camConfigJson conf_struct_var; 
    // fetch all configuration parameters from json file to the argument
    conf_struct_var = jsonReader(constants::CONFIG_FILE_PATH, constants::CONF_ID);  
    // initialize stereo camera class 
    GsStereoCamera st_cam{conf_struct_var.capture_width, conf_struct_var.capture_height, conf_struct_var.display_width, conf_struct_var.display_height, conf_struct_var.frame_rate, conf_struct_var.flip_method};
    // fetch pipeline strings for each camera
    std::string pipeline1, pipeline2;
    std::tie(pipeline1, pipeline2) = st_cam.getStereoGsPipeline();

   
    cv::VideoCapture camLeft(pipeline1, cv::CAP_GSTREAMER);
    cv::VideoCapture camRight(pipeline2, cv::CAP_GSTREAMER); 

    if(!camLeft.isOpened())
    {
        printf("cam0 is not opened. \n");
        return -1;
    }
    if(!camRight.isOpened())
    {
          printf("cam1 is not opened. \n");
         return -1;
    }


    while(true)
    {
        cv::Mat rgbLeft, rgbRight;

        camLeft >> rgbLeft;
        camRight >> rgbRight; 
        
        // Converting left right images to gray scale 
        cv::Mat grayLeft, grayRight; 
        cv::cvtColor(rgbLeft, grayLeft, cv::COLOR_BGR2GRAY);
        cv::cvtColor(rgbRight, grayRight, cv::COLOR_BGR2GRAY);

        //-- And create the image in which we will save our disparities
        assert((grayLeft.size() == grayRight.size()) && "Sizes of two camera images are not equal");

        if( !grayLeft.data || !grayRight.data )
        {
            std::cout<< " --(!) Error reading images " << std::endl; 
            return -1; 
        }

        // find a stereo vision         
        cv::Mat imgDisparity32F = cv::Mat(grayLeft.rows, grayLeft.cols, CV_32F);
        // to get disparity map
        imgDisparity32F = disparity::getDisparityMap(grayLeft, grayRight, imgDisparity32F);
        
        //showing left right images and disparity image
        // publishing rgbLeft and rgbRight images on the Desktop application
        showFrame(rgbLeft, w.pixmap_left);
        showFrame(rgbRight, w.pixmap_right);    
        showFrameGrayScale(imgDisparity32F, w.pixmap_disparity);

        qApp->processEvents();        
    }
    return a.exec();;
}