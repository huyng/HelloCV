# Example of building an OpenCV project in XCode

### Requirements:
- OpenCV 2.4.3 (installed via homebrew)
- XCode
- pkg-config

### How this project was created:

The following paths may be different for your osx system. You can get
the locations by running:

    pkg-config --libs opencv
    pkg-config --cflags opencv


- Change **Project Settings > Build Settings > C++ Standard Library** to
    - libstdc++ (GNU C++ Standard Library)  
<br>
- Set **Project Settings > Build Settings > Header Search Paths** to:
    - /usr/local/Cellar/opencv/2.4.3/include/opencv
    - /usr/local/Cellar/opencv/2.4.3/include  
<br>
- Set **Project Settings > Build Settings > Library Search Paths** to:
    - /usr/local/Cellar/opencv/2.4.3/lib  
<br>
- Add the following libraries to **Project Settings > Build Phases > Link  Binary With Libraries**
    - /usr/local/Cellar/opencv/2.4.3/lib/libopencv_calib3d.dylib 
    - /usr/local/Cellar/opencv/2.4.3/lib/libopencv_contrib.dylib 
    - /usr/local/Cellar/opencv/2.4.3/lib/libopencv_core.dylib 
    - /usr/local/Cellar/opencv/2.4.3/lib/libopencv_features2d.dylib 
    - /usr/local/Cellar/opencv/2.4.3/lib/libopencv_flann.dylib 
    - /usr/local/Cellar/opencv/2.4.3/lib/libopencv_gpu.dylib 
    - /usr/local/Cellar/opencv/2.4.3/lib/libopencv_highgui.dylib 
    - /usr/local/Cellar/opencv/2.4.3/lib/libopencv_imgproc.dylib 
    - /usr/local/Cellar/opencv/2.4.3/lib/libopencv_legacy.dylib 
    - /usr/local/Cellar/opencv/2.4.3/lib/libopencv_ml.dylib 
    - /usr/local/Cellar/opencv/2.4.3/lib/libopencv_nonfree.dylib 
    - /usr/local/Cellar/opencv/2.4.3/lib/libopencv_objdetect.dylib 
    - /usr/local/Cellar/opencv/2.4.3/lib/libopencv_photo.dylib 
    - /usr/local/Cellar/opencv/2.4.3/lib/libopencv_stitching.dylib 
    - /usr/local/Cellar/opencv/2.4.3/lib/libopencv_ts.dylib 
    - /usr/local/Cellar/opencv/2.4.3/lib/libopencv_video.dylib 
    - /usr/local/Cellar/opencv/2.4.3/lib/libopencv_videostab.dylib

