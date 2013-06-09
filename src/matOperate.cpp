/**这段代码分离三个通道，然后计算图像的colorfulness，计算的方法见论文：
 * 《Multimedia Features for Click Prediction of New Ads in Display Advertising》P779
 * **/

#include "cv.h"
#include "cxcore.h"
#include "highgui.h"
#include <math.h>
#include "ClassesFolder.h"

double colorCal( int argc, char** argv )
{
	char *iamgePath = argv[1];

	IplImage* src = NULL;
	src = cvLoadImage( iamgePath);
	CvMat* Mrg = cvCreateMat(src->height,src->width,CV_32FC1);
	CvMat* Myb = cvCreateMat(src->height,src->width,CV_32FC1);
	for(int y = 0;y < src->height;y++){
		uchar *ptr = (uchar *)(src->imageData + y *src->widthStep);
		for(int x = 0; x < src->width; x++){
			cvmSet(Mrg,y,x,ptr[3*x+0]-ptr[3*x+1]);//rg = r-g
			cvmSet(Myb,y,x,(ptr[3*x+0]+ptr[3*x+1])/2-ptr[3*x+2]);//yb = (r+g)/2-b
		}
	}
    CvScalar avgrg,avgyb;
    CvScalar strg,styb;
    cvAvgSdv(Mrg,&avgrg,&strg);//计算均值和标准差
    cvAvgSdv(Myb,&avgyb,&styb);//计算均值和标准差
    double colorfulness = sqrt(strg.val[0] * strg.val[0] + styb.val[0]* styb.val[0])+
    		0.3*sqrt(avgrg.val[0]*avgrg.val[0]+avgyb.val[0]* avgyb.val[0]);

	return colorfulness;
}
