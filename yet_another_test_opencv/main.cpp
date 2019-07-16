#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include <string>
#include "opencvHelpers.h"

using namespace std;

int main(int argc, char **argv)
{

	if (argc != 2)
	{
		cout << " Usage: display_image ImageToLoadAndDisplay" << endl;
		return -1;
	}

	//	const string absolutePath = "/images/santa-maria-del-fiore-cover.jpg";

	const string absolutePath = argv[1];
	cv::Mat newImage = getPictureByPath(absolutePath);
	displayPictureAutosized(newImage, "Santa Maria del Fiore");

	return 0;
}