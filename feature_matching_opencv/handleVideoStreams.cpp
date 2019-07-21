//
// Created by vic on 7/20/19.
//

#include "handleVideoStreams.h"
#include <iostream>
#include <exception>

using namespace std;

vector<cv::Mat> getFramesFromVideo(const string &pathToFile, vector<double> framesTiming)
{
	// Create video stream object
	cv::VideoCapture videoRef;

	// Open video
	videoRef.open(pathToFile, cv::CAP_ANY);

	// Check if video is opened successfully
	if (!videoRef.isOpened())
	{
		cerr << "Could not open file:" << pathToFile << endl;
		throw new exception();
	}

	// Result vector contains needed frames
	vector<cv::Mat> frames;

	for (auto timing : framesTiming)
	{
		cv::Mat frameRef;
		videoRef.set(cv::CAP_PROP_POS_MSEC, timing);  // go to the 1.2 second in the video
		videoRef.read(frameRef);

		if (frameRef.empty())
		{
			break;
		}

		frames.push_back(frameRef);
	}


	cv::Size refS = cv::Size((int) videoRef.get(cv::CAP_PROP_FRAME_WIDTH),
	                         (int) videoRef.get(cv::CAP_PROP_FRAME_HEIGHT));

	cout << "Reference frame resolution: Width = "
	     << refS.width << "  Height = " << refS.height
	     << " of nr#: " << videoRef.get(cv::CAP_PROP_FRAME_COUNT) << endl;

	return frames;
}
