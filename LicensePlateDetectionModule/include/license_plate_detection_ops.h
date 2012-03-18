// license_plate_detection_ops - license plate detection module 
// 此模块仅仅为封装和VC6的DLL而存在，在项目初步完成后将归并
//
// Copyright 2012 Yanxiang Wu. All right reserved
// Private Property
//
// Author: cosmobserver@gmail.com (Yanxiang Wu)
//         <Please add your name by the format above
//
// Head file for dll exporting and importing

#ifndef LICENSE_PLATE_DETECTION_OPS_H_   // define protection
#define LICENSE_PLATE_DETECTION_OPS_H_

// trick to automatic import and export at both client and dll
#ifdef _EXPORTINGLISO
  #define LISO_CLASS_DECLSPEC    __declspec(dllexport)
#else
  #define LISO_CLASS_DECLSPEC    __declspec(dllimport)
#endif

#include "..\..\InteroperatingLibrary\include\open_cv_interoperating.h"

namespace lib_parking_tracking{
  
  //  检测image2detect中是否有车牌，
  //  如有，则返回车牌的的灰度图像
  //  否则，返回NULL
  LISO_CLASS_DECLSPEC cv::Mat* DetectLicensePlate(
      const cv::Mat& image2detect);


} //ns lib_parking_tracking


#endif //LICENSE_PLATE_RECOGNITION_OPS_H_