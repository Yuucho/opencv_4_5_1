#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
    //OpenCV°æ±¾ºÅ
    cout << "OpenCV_Version: " << CV_VERSION << endl;

    //¶ÁÈ¡Í¼Æ¬
    Mat img = imread("C:\\Users\\Administrator\\Desktop\\1.jpg",IMREAD_GRAYSCALE);
    if (img.empty())
    {
        printf("could not load image...\n");
    }
    namedWindow("input_window", WINDOW_FREERATIO);
    imshow("input_window", img);
    waitKey(0);
    destroyAllWindows();
    return 0;
}
