#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "opencvHelpers.h"
#include "handleVideoStreams.h"

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{

	if (argc != 2)
	{
		cout << " Usage: display_image ImageToLoadAndDisplay" << endl;
		return -1;
	}

	const string absolutePath = argv[1];
//	cv::Mat newImage = getPictureByPath(absolutePath);
//	displayPictureAutosized(newImage, "Display picture");

	vector<double> seconds = {7.1, 27.2, 26.5};
	vector<cv::Mat> frames = getFramesFromVideo(absolutePath, seconds);

	displayPictureAutosized(frames[0], "Pic01");
	displayPictureAutosized(frames[1], "Pic02");
	displayPictureAutosized(frames[3], "Pic03");

	return 0;
}