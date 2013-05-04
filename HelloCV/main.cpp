//
//  main.cpp
//  HelloCV
//
//  Created by Huy Nguyen on 5/3/13.
//  Copyright (c) 2013 HelloCv. All rights reserved.
//

#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
int main(int argc, const char * argv[])
{
    string filename = "moon.jpg";
    string windowName = "Hello OpenCV";
    cv::Mat mat;

    cout << "Hello, OpenCV!" << endl;
    cout << "Opening image = " << filename << endl;
    
    mat = cv::imread(filename);
    cout << "Image dimensions = " << mat.size() << endl;
    
    // show image in cv window
    cv::imshow(windowName, mat);
    
    // wait for keypress to exit
    cv::waitKey(0);

    return 0;
}

