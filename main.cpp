#include "QuickOpencv.h"

int main()
{
    //OpenCV°æ±¾ºÅ
    cout << "OpenCV_Version: " << CV_VERSION << endl;

    //¶ÁÈ¡Í¼Æ¬
    Mat img = imread("C:\\Users\\Administrator\\Desktop\\·âÃæ\\3.jpg");
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
