/*
 * main.cpp
 *
 *  Created on: 2013-5-31
 *      Author: wangjz
 */

#include "cv.h"
#include "cxcore.h"
#include "highgui.h"


#include "ClassesFolder.h"

int main( int argc, char** argv )
{
	//doCandy(argc,argv);
	//doColorHistogram(argc,argv);
	//doShapeCollect(argc, argv );
	//doConvexPointCollect(argc, argv );
	//doHoughLine(argc, argv );
	doTextureCollect(argc, argv );
	return 0;
}
