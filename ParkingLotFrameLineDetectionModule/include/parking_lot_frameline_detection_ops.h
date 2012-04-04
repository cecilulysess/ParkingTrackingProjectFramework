// parking_lot_frameline_detection_ops - parking lot frameline detection module 
// 此模块仅仅为封装和VC6的DLL而存在，在项目初步完成后将归并
//
// Copyright 2012 Yanxiang Wu. All right reserved
// Private Property
//
// Author: cosmobserver@gmail.com (Yanxiang Wu)
//         <Please add your name by the format above
//
// Head file for dll exporting and importing

#ifndef PARKING_LOT_FRAMELINE__DETECTION_OPS_H_   // define protection
#define PARKING_LOT_FRAMELINE__DETECTION_OPS_H_

// trick to automatic import and export at both client and dll
#ifdef _EXPORTINGLISO
  #define LISO_CLASS_DECLSPEC    __declspec(dllexport)
#else
  #define LISO_CLASS_DECLSPEC    __declspec(dllimport)
#endif

#include "open_cv_interoperating.h"

namespace lib_parking_tracking{
  
  //  检测image2detect中是否有停车线，
  //  如有则返回1.0f
  //  否则，返回0.0f
  LISO_CLASS_DECLSPEC float DetectParkingLotFrameline(
      const cv::Mat& image2detect);


} //ns lib_parking_tracking


#endif //PARKING_LOT_FRAMELINE__DETECTION_OPS_H_