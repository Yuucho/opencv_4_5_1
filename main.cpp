#include <opencv2/opencv.hpp>
#include "quickopencv.h"
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv) {
	//Mat src = imread("C:\\Users\\Administrator\\Desktop\\����\\3.jpg"); //  B, G, R
	//if (src.empty()) {
	//	printf("could not load image....\n");
	//	return -1;
	//}
	//// namedWindow("���봰��", WINDOW_FREERATIO);
	//imshow("���봰��", src);

	QuickDemo qd;
	qd.face_detection_demo();

	waitKey(0);
	destroyAllWindows();
	return 0;
}
