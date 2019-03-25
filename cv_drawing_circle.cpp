//http://docs.opencv.org/modules/core/doc/drawing_functions.html#void line(Mat& img, Point pt1, Point pt2, const Scalar& color, int thickness, int lineType, int shift)

#include <opencv2/opencv.hpp>

#include <iostream>
#include <string>

using namespace cv;

int main()
{

   float h = 300;
   float w = 200;

   Mat image(h, w, CV_8U, Scalar(255));

   int color1 = rand() % 3 * 127;
   int color2 = rand() % 3 * 127;

   while (color1 == color2)
	   color2 = rand() % 3 * 127;

   for (int i = 0; i < 6; i++) {
	   int m = i / 2;
	   int n = i % 2;
	   int newx = w / 2 * n;
	   int newy = h / 3 * m;
	   int newx1 = (n + 1)*w;
	   int newy1 = (m + 1) *h / 3;
	   int newx2 = w / 4 * (2 * n + 1);
	   int newy2 = h / 6 * (m * 2 + 1);
	   rectangle(image, Point(newx, newy), Point(newx1, newy1), Scalar(color1), -1);
	   circle(image, Point(newx2, newy2), h / 6, Scalar(color2), -1);
   }
   imshow("cv::circle", image);
   waitKey(0);

    
   return 0;
}