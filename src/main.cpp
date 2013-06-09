/*
 * main.cpp
 *
 *  Created on: 2013-5-31
 *      Author: wangjz
 */

#include "cv.h"
#include "cxcore.h"
#include "highgui.h"
#include<time.h>
#include <iostream>


#include "ClassesFolder.h"
using namespace std;

int main( int argc, char** argv )
{
//    clock_t start_time=clock();

	//输入参数：/home/wangjz/Desktop/ExImages/1.jpg
	//doCandy(argc,argv);
	//doColorHistogram(argc,argv);
	//doShapeCollect(argc, argv );
	//doConvexPointCollect(argc, argv );
	//doHoughLine(argc, argv );
	//doTextureCollect(argc, argv );
//	avgCal(argc, argv );
	double x = colorCal(argc, argv );
	printf("%f",x);

//    clock_t end_time=clock();
//    cout<< "Running time is: "<<static_cast<double>(end_time-start_time)/CLOCKS_PER_SEC*1000<<"ms"<<endl;//输出运行时间


	return 0;
}
