/**这段代码将RGB转换到HSV，再求取hue saturation,value的均值
 * **/

#include "cv.h"
#include "cxcore.h"
#include "highgui.h"

#include "ClassesFolder.h"

void avgCal( int argc, char** argv )
{
	char *iamgePath = argv[1];
	char *savePath = argv[2];

	//load image
	IplImage* bgr = NULL;
	bgr = cvLoadImage( iamgePath);

	//convert rgb2hsv
	IplImage* bgr32f, * hsv;
	bgr32f = cvCreateImage( cvGetSize(bgr), IPL_DEPTH_32F, 3 );
	hsv = cvCreateImage( cvGetSize(bgr), IPL_DEPTH_32F, 3 );
	cvConvertScale( bgr, bgr32f, 1.0 / 255.0, 0 );//convert之前要进行缩放，将取值范围变换到0～1
	cvCvtColor( bgr32f, hsv, CV_BGR2HSV );

	cvNamedWindow("canny",1);
	//cvShowImage( "canny", hsv );
	//cvWaitKey(0);
	cvReleaseImage( &bgr32f );
	//cal the average value of every channel
	CvScalar val = cvAvg(hsv);
	//	val[0]	double	83.488760100210129
	//	val[1]	double	0.53591686981233155
	//	val[2]	double	0.53942276813455614
	//关于opencv中HSV的取值范围的讨论请参见这篇文章http://blog.csdn.net/dark_blue_sea/article/details/5251763

	//release
	cvReleaseImage(&hsv);
	cvReleaseImage( &bgr );
}
