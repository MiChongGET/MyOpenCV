#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main(void)
{
	Mat originalImage = imread("C:\\Users\\15646\\Pictures\\�����.jpg");
	if (originalImage.empty())
	{
		cout << "fail to load image !" << endl;
		return -1;
	}
	namedWindow("opencv test", CV_WINDOW_AUTOSIZE);
	imshow("opencv test", originalImage);
	waitKey(0);
	return 0;
}