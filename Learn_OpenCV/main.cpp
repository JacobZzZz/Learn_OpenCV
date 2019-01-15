//
//  main.cpp
//  Learn_OpenCV
//
//  Created by Huang on 2019/1/15.
//  Copyright © 2019 Huang. All rights reserved.
//

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main(int argc, const char * argv[]) {
    //填写一个图片的路径，直接把图片拽到这里面就自动生成路径了。
    Mat src = imread("/Users/jacob/CodeFiles/XcodeFile/Learn_OpenCV/Learn_OpenCV/Image/123.jpeg");
    //看是否读取图片成功
    if(src.empty()){
        cout<<"can not load image...";
    }
    //显示图片在一个窗口output中
    namedWindow("output",WINDOW_NORMAL);
    imshow("output", src);
    
    //等待键盘按键
    waitKey(0);
}
