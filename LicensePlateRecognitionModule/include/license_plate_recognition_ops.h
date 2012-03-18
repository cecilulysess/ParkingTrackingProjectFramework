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
//
// Head file for dll exporting and importing

#ifndef LICENSE_PLATE_RECOGNITION_OPS_H_   // define protection
#define LICENSE_PLATE_RECOGNITION_OPS_H_

// trick to automatic import and export at both client and dll
#ifdef _EXPORTINGLISO
  #define LISO_CLASS_DECLSPEC    __declspec(dllexport)
#else
  #define LISO_CLASS_DECLSPEC    __declspec(dllimport)
#endif

#include "..\InteroperatingLibrary\include\open_cv_interoperating.h"

#include <string>

namespace lib_parking_tracking{
  
  // Recognize License Number
  // if successed recognized the number, then license_number will be assigned
  // to the number and return true
  // else 
  // left license_number intacted and return false
  LISO_CLASS_DECLSPEC bool RecognizeLicenseNumber(
      const cv::Mat& image2recognize, 
      std::string& license_number);


} //ns lib_parking_tracking


#endif //LICENSE_PLATE_RECOGNITION_OPS_H_