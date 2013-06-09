///**
// * http://www.opencv.org.cn/forum/viewtopic.php?f=1&t=1699
// * 该示例程序解释如何将rgb色彩空间转换到hsv色彩空间，并且如何计算相关的数值，我还没来得及细看
// * **/
//
//#ifdef _CH_
//#pragma package <opencv>
//#endif
//
//#include "cv.h"
//#include "highgui.h"
//#include <stdio.h>
//
//int edge_thresh = 100;
//
//IplImage *src_image = 0, *dst_image = 0, *hist_image = 0;
//
//void on_trackbar( int dummy )
//{
//	dst_image = cvCloneImage(src_image);
//	cvCvtColor( src_image, dst_image, CV_BGR2HSV );
//
//	int hue=dummy-256;
//	int i;
//	float max_value = 0;
//
//	uchar lut[256][3];
//	CvMat* lut_mat;
//
//	lut_mat = cvCreateMatHeader( 1, 256, CV_8UC3 );
//	cvSetData( lut_mat, lut,0);
//
//	for( i = 0; i < 256; i++ ) {
//		int v = (i+hue);
//		if( v < 0 )
//			v = 0;
//		if( v > 255 )
//			v = 255;
//		lut[i][1] = (uchar)v;
//		lut[i][0] = (uchar)i;
//		lut[i][2] = (uchar)i;
//	}
//	cvLUT( dst_image, dst_image, lut_mat );
//	cvCvtColor( dst_image, dst_image, CV_HSV2BGR );
//	cvShowImage("Image1", dst_image );
//	cvReleaseImage(&dst_image);
//}
//
//int main( int argc, char** argv )
//{
//	char* filename = argv[0];
//
//	src_image=cvLoadImage( filename, CV_LOAD_IMAGE_ANYDEPTH | CV_LOAD_IMAGE_ANYCOLOR );
//
//	cvNamedWindow( "Image1", 1 );//创建窗口
//	cvShowImage("Image1", src_image );
//	cvCreateTrackbar( "tbarname", "Image1", &edge_thresh, 512, on_trackbar );
//
//	cvWaitKey(0);
//
//	cvDestroyWindow( "Image1" );//销毁窗口
//	cvReleaseImage( &src_image ); //释放图像
//	return 0;
//
//}
