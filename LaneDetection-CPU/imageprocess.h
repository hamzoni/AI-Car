#ifndef IMAGEPROCESS_H
#define IMAGEPROCESS_H

#include <iostream>

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include <layer.h>

void separateLayers(cv::Mat &src, std::vector<Layer> &layers);

void concatenateLayers(std::vector<Layer> &layers, cv::Mat &dst);

void birdView(cv::Mat &src, cv::Mat &dst);

void roiImg(cv::Mat &src, cv::Mat &dst , cv::Rect &roi);

void findCnts(cv::Mat &src, std::vector<std::vector<cv::Point>> &contours);

void findCenterPoint(Layer &layer);

void findPoints(Layer &layer);

#endif // IMAGEPROCESS_H
