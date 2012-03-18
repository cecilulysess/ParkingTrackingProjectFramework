// car_rear_detection_ops - car rear detection module 
// 此模块仅仅为封装和VC6的DLL而存在，在项目初步完成后将归并
//
// Copyright 2012 Yanxiang Wu. All right reserved
// Private Property
//
// Author: cosmobserver@gmail.com (Yanxiang Wu)
//         <Please add your name by the format above
//
// Head file for dll exporting and importing

#ifndef CAR_REAR_DETECTION_OPS_H_   // define protection
#define CAR_REAR_DETECTION_OPS_H_

// trick to automatic import and export at both client and dll
#ifdef _EXPORTINGLISO
  #define LISO_CLASS_DECLSPEC    __declspec(dllexport)
#else
  #define LISO_CLASS_DECLSPEC    __declspec(dllimport)
#endif

#include "..\..\InteroperatingLibrary\include\open_cv_interoperating.h"

namespace lib_parking_tracking{
  
  //  检测image2detect中是否有车尾,
  //  如有则返回1.0f
  //  否则，返回0.0f
  LISO_CLASS_DECLSPEC float DetectCarRear(
      const cv::Mat& image2detect);


} //ns lib_parking_tracking


#endif //CAR_REAR_DETECTION_OPS_H_