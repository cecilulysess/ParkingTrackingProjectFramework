// open_cv_interoperating - interoperating functions for OpenCV
// This dll maintenance a series of function used for interoperating 
// between many environments
//
// Copyright 2012 Yanxiang Wu. All right reserved
// Private Property
//
// Author: cosmobserver@gmail.com (Yanxiang Wu)
//         <Please add your name by the format above
//
#include "include\open_cv_interoperating.h"

#include "opencv2\highgui\highgui.hpp"
#include "opencv\highgui.h"

namespace lib_parking_tracking{
  void OpenCVInteroperator::ShowImage(
      const cv::Mat& image2show, 
      const char* window_title){

    cv::namedWindow(window_title, CV_WINDOW_NORMAL | CV_WINDOW_KEEPRATIO| CV_GUI_EXPANDED);
    imshow(window_title, image2show);
    cv::waitKey(0);
  }

  IplImage* OpenCVInteroperator::Mat2IplImage(cv::Mat& image2transform){
    IplImage img = image2transform;
    return &img;
  }

  cv::Mat& OpenCVInteroperator::IplImage2Mat(IplImage* image2transform){
    cv::Mat* image = new cv::Mat(image2transform);
    return *image;
  }
}//nslib_parking_tracking