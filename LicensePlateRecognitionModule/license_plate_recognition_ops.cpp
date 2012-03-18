// license_plate_recognition_ops - license plate recognition module based on
// tesseractOCR and OpenCV
// this module received an OpenCV image object so that it can be manipulated
// and processing. The output will be the liscense number in the plate
//
// Copyright 2012 Yanxiang Wu. All right reserved
// Private Property
//
// Author: cosmobserver@gmail.com (Yanxiang Wu)
//         <Please add your name by the format above
#include "include\license_plate_recognition_ops.h"

namespace lib_parking_tracking{
  bool RecognizeLicenseNumber(
      const cv::Mat& image2recognize, 
      std::string& license_number){
    license_number = "ÃöD123456";
    return true;
  }
}