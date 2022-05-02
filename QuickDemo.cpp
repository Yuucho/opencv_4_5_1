#include "QuickOpencv.h"


void QuickDemo::colorSpace_Demo(Mat& image)
{
	Mat gray, hsv;
	cvtColor(image, hsv, COLOR_BGR2HSV);
	//H 0 - 180,S,Ve
	cvtColor(image, gray, COLOR_BGR2GRAY);
	imshow("HSV", hsv);
	imshow("»Ò¶È", gray);
	imwrite("D:/hsv.png", hsv);
	imwrite("D:/gray.png", gray);
}