// ParkingTrackingSystem.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <fstream>

#include "open_cv_interoperating.h"
#include "license_plate_recognition_ops.h"

#include <opencv2/core/core.hpp>
#include <opencv/highgui.h>
#include <opencv2/highgui/highgui.hpp>
#include <opencv/cv.h>

using namespace std;
using namespace cv;
using namespace lib_parking_tracking;

int _tmain(int argc, char** argv){
  /*if( argc != 2) {
     cout <<" Usage: testProject ImageToTest" << endl;
     return -1;
  }*/
  char* addr = "D:\\Dropbox\\OtherPrograms\\CV\\LPRecognization\\data\\图片\\新建文件夹\\3.jpg";
  
  cv::Mat image = cv::imread(addr, CV_LOAD_IMAGE_GRAYSCALE);
  if (image.data==NULL) {
    cout<<"读取文件失败"<<endl;
  } else {
    /*cv::namedWindow("test image", CV_WINDOW_NORMAL | CV_WINDOW_KEEPRATIO| CV_GUI_EXPANDED);
    imshow("test image", image);*/
    lib_parking_tracking::OpenCVInteroperator::ShowImage(image, "test image");
    std::string LP_number = "";
    
    if (lib_parking_tracking::RecognizeLicenseNumber(image, LP_number)) {
      cout<<"识别所得车牌号码："<<LP_number<<endl;
    }
  }
  //system("pause");
  //=================================================================================
  // 目前貌似在64位系统下读取白屏Bug
  //cv::Mat frame;
  //cv::VideoCapture cap(0);

  //if (!cap.isOpened()) {
  //        std::cout << "Failed to open video capture device 0\n";
  //        return 1;
  //}

  //cv::namedWindow("picture window", CV_WINDOW_AUTOSIZE);
  //      
  //while (cv::waitKey(30) == -1) {
  //        cap >> frame;
  //        cv::imshow("picture window", frame);
  //}
  //return 0;
}

