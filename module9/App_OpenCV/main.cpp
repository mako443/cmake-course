#include <opencv2/opencv.hpp>

using namespace cv;

int main()
{
    Mat image = imread("sample.jpg");
    imshow("wdw", image);
    waitKey();

    return 0;
}