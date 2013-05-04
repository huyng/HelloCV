//
//  main.cpp
//  HelloCV
//
//  Created by Huy Nguyen on 5/3/13.
//  Copyright (c) 2013 HelloCv. All rights reserved.
//

#include <iostream>
#include "opencv2/opencv.hpp"

int main(int argc, const char * argv[])
{


    std::cout << "Hello, World!" << std::endl;
    cv::namedWindow("Hello world");
    cv::Mat mat = cv::imread("moon.jpg");
    std::cout << mat.size();

    
    return 0;
}

