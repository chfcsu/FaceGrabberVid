﻿#include <iostream>
#include "src/std_includes.h"
#include "src/opencv_includes.h"
#include "src/FaceGrabber.h"

using namespace std;
using namespace cv;

int main()
{
	FaceGrabber fg;
	fg.StarGrab();

	//如果false 退出程序
	if (false)
	{
		return 1;
	}
	//执行死循环
	while (true)
	{
		//读入一帧帧图片
		fg.GetFrame();
		if (fg.GetFace())
		{
			
			fg.ShowDstTorch();
			fg.ShowROIFace();
			
			if (waitKey(1) == 'q')
				return 1;
		}

	}

	return 1;
}
