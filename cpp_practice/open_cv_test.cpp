//OpenCv test program
#include <opencv2/opencv.hpp>
#include <iostream>

int main(){
    std::string image_path = "mario_pic.jpg";
    cv::Mat img = cv::imread(image_path, cv::IMREAD_COLOR);

    cv::imshow("Display window", img);
    cv::waitKey(0); // Wait for a keystroke in the window
    return 0;
}