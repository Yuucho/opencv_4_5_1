#include "QuickOpencv.h"

int main()
{
    //OpenCV�汾��
    cout << "OpenCV_Version: " << CV_VERSION << endl;

    //��ȡͼƬ
    Mat img = imread("C:\\Users\\Administrator\\Desktop\\����\\3.jpg");
    if (img.empty())
    {
        printf("could not load image...\n");
    }
    //namedWindow("input_window");
    imshow("input_window", img);
    QuickDemo qd;
    qd.colorSpace_Demo(img);
    waitKey(0);
    destroyAllWindows();
    return 0;
}
