#pragma once

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <string>

void displayPictureAutosized(cv::Mat image, const std::string &windowName = "Display window");

cv::Mat getPictureByPath(const std::string &pathToPicture, const int &parameter = 1);
