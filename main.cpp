// CheckObject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Detector.h"

DepthChecker check_object = DepthChecker();
void debugdepth(cv::Mat frame_depth)
{

    cv::cvtColor(frame_depth, frame_depth, cv::COLOR_RGB2GRAY);


    //	   resize(frame_depth, frame_depth, cv::Size(), 0.5, 0.5);
    //	   ScreenObj bigest = check_object.getObject(frame_depth);
    check_object.debug(frame_depth, 95, 101);
    // 133-138 : 1,6m 
    // 95 - 101 : 1,2 m
    // 64 - 67 : 0.8m
    //	    std::cout << "Tetst: " << bigest.getdistance()<<'\n';
    //	   check_object.debug(frame_depth);
}

int main()
{
    std::string filename = "F:/QuestionVideo.avi";
    cv::Mat frame;
    cv::VideoCapture capture(filename);

    if (!capture.isOpened())
	   throw "Error when reading steam_avi";

    Detector detector = Detector();

    for (; ; )
    {
	   capture >> frame;
	   if (frame.empty())
		  break;
	   detector.debug(frame); // hien cua so opencv

	   std::vector<cv::Rect> reactangles = detector.detect(frame); // box tra ve
	   for (auto reactangle : reactangles)
	   {
		  std::cout << "Rect : " << reactangle << " \n";
	   }
	   cv::waitKey(20);
    }
    cv::waitKey(0);

}
