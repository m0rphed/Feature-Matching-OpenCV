#pragma once

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <vector>
#include <string>

std::vector<cv::Mat> getFramesFromVideo(const std::string &pathToFile, std::vector<double> framesTiming);