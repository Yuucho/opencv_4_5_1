#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
    //OpenCV�汾��
    cout << "OpenCV_Version: " << CV_VERSION << endl;

    //��ȡͼƬ
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
