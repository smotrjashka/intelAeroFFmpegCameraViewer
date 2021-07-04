// aeroGstreamer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <opencv2/opencv.hpp>
#include <opencv2/videoio.hpp>
using namespace cv;

#include <iostream>
using namespace std;

int main()
{
    cout << "start aplication" << endl;
    string pipe = "rtspsrc location=rtsp://192.168.8.1:8554/bottom latency=0 ! decodebin ! autovideosink";
    string urlFirstCamera = "rtsp://192.168.8.1:8554/rsir";
    string urlSecondCamera = "tsp://192.168.8.1:8554/rsir2";
    string urlDepthSensor = "rtsp://192.168.8.1:8554/rsdepth";
    string urlHDCamera = "rtsp://192.168.8.1:8554/video13";
    string urlBlackAndWhiteCamera = "rtsp://192.168.8.1:8554/bottom";
    cout << "giving adresses" << endl;
    


    cout << "finish application" << endl;
    return 0;
}
