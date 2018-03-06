#ifndef CONFIG_H
#define CONFIG_H

#include <opencv2/highgui/highgui.hpp>
#include <getparam.h>
#include <line.h>

namespace conf {

    extern int WIDTH ;
    extern int HEIGHT;

    extern int Y_CUT;
    extern int MIN_AREA_CNT;

    extern int H_CUT;
    extern int W_CUT;


    extern int H_ROI;
    extern int W_ROI;

    extern int NUMLAYERS;

    extern int H_LAYER;

    extern int W_LAYER;
    extern int MIN_DIS_TWO_POINTS;

    extern int X_CENTER;

    extern int MIN_POINTS;
    extern int DIS_GEN_LINE_TOP;
    extern int DIS_GEN_LINE_BOT;

    extern int BIRD;

    extern int DIS_ROAD_INJUCTION;

    extern int SPEED;
    extern int LEFT;
    extern int DEBUG;
    extern int WAIT_KEY;
    extern int WRITE_VIDEO;

    extern int LIMIT_SIGN_DETECT;
    extern std::vector<String> signs;
    extern int CURRENT_SIGN;
}

namespace imp {

    extern cv::Point middle;
    extern cv::Rect roi;
    extern cv::Rect roiCut;
    extern cv::Rect roiRight;

    extern Line left;
    extern Line top;
    extern Line right;
    extern Line bottom;

    extern cv::Mat matrixWrap;
}

namespace refer{
    extern double A;
    extern double O;
    extern double B;
    extern double a;
    extern double b;
}

void init();


#endif // CONFIG_H
