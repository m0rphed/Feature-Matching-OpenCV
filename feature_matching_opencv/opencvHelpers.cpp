#include "opencvHelpers.h"
#include <iostream>
#include <exception>

using namespace std;

void displayPictureAutosized(cv::Mat image, const string &windowName)
{
	cv::namedWindow(windowName, cv::WINDOW_AUTOSIZE);   // Create a window for display
	cv::imshow(windowName, image);                      // Show our image inside it
	cv::waitKey(0);                                     // Wait for a keystroke in the window
}

cv::Mat getPictureByPath(const string &pathToPicture, const int &parameter)
{
	cv::Mat image;
	image = cv::imread(pathToPicture, parameter); // Read the file

	if (!image.data) // Check for invalid input
	{
		cerr << "ERROR: Could not open or find the image" << endl;
		throw new exception();
	}

	return image;
}
