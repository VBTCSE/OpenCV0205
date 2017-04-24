// OpenCV0205

// The purpose of this program is to display a video.

// This version of the video display program creates a trackbar which can
// be used to select the viewing location in the video.
// Also, allow the user to single-step the video or go into continuous
// run mode.

// Correct usage: OpenCV0205.exe video_filename

// Program control:
// Single step: press "s" key while cursor is in the video window.
// Run:			press "r" key	"			"			"
// Quit:		press <Esc> key	"			"			"



// Refer to http://docs.opencv.org/master for relevant documentation.


#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;







//-------------------------------------------------------------------------
// Define global variables
// Denote that these are global with "g_"...
// These will be accessible to both the main function and to the 
// trackbar slider callback function.
//-------------------------------------------------------------------------







int g_slider_position = 0;	// Equals video frame number currently being displayed.

int g_run = 1;				// Controls run/single step mode: 1=single step, < 0 = run.

bool g_dontset = false;		// Flag: if true, then do not change display state:
							// continue in current mode, either run or single step

VideoCapture g_cap;			// Video capture stream







void onTrackbarSlide(int pos, void*)
{
	//-------------------------------------------------------------------------
	// This is a callback function which is run in response to the slider moving.
	//-------------------------------------------------------------------------








	//-------------------------------------------------------------------------
	// Use the set method of the global VideoCapture object, to set the 0-based 
	// index, of the frame to be shown next, as specified by the position of 
	// the trackbar.
	//-------------------------------------------------------------------------

	g_cap.set(CAP_PROP_POS_FRAMES, pos);






	//-------------------------------------------------------------------------
	// Control logic.
	//-------------------------------------------------------------------------

	if (!g_dontset)
	{
		// g_dontset is false, so go into single step mode.
		g_run = 1;
	}

	g_dontset = false;	// clear flag so that unless flag is set elsewhere,
						// program will go into single step mode.
}







int main(int argc, char** argv)
{
	//-------------------------------------------------------------------------
	// Test whether the number of arguments (argc) is not equal to 2.
	// If it is not equal to 2, output a message showing what the correct
	// usage of this program is, then pause for the user response and return -1.
	//-------------------------------------------------------------------------

	if (argc != 2)
	{
		cout << " Usage: " << argv[0] << " VideoToLoadAndDisplay" << endl;
		system("pause");
		return -1;
	}







	//-------------------------------------------------------------------------
	// Output the instructions for contolling the video playback.
	// Program control:
	// Single step: press "s" key while cursor is in the video window.
	// Run:			press "r" key	"			"			"
	// Quit:		press <Esc> key	"			"			"
	//-------------------------------------------------------------------------

	cout << "Program control:\n";
	cout << "Single step: press \"s\" key while cursor is in the video window.\n";
	cout << "Run:         press \"r\" key	   \"           \"          \"\n";
	cout << "Quit:        press <Esc> key	   \"           \"          \"\n\n";







	//-------------------------------------------------------------------------
	// Use the open function of the global VideoCapture object to open the video
	// from a file whose name is in argv[1]
	//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code








	//-------------------------------------------------------------------------
	// Use the get method of the global VideoCapture object, to get the number
	// of frames in the video file.  Save the returned value as an int in a
	// variable frames: int frames = ...
	//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code








	//-------------------------------------------------------------------------
	// Use the get method of the global VideoCapture object, to get the width
	// (in pixels) of the frames in the video stream.  Save the returned value 
	// as an int in a variable width: int width = ...
	//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code








	//-------------------------------------------------------------------------
	// Use the get method of the global VideoCapture object, to get the height
	// (in pixels) of the frames in the video stream.  Save the returned value 
	// as an int in a variable height: int height = ...
	//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code








	//-------------------------------------------------------------------------
	// Output the video parameters: frames, width, height.
	//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code






	//-------------------------------------------------------------------------
	// Declare a Mat object to contain the image of each frame from the video
	// input stream.
	//-------------------------------------------------------------------------

	Mat frame;







	//-------------------------------------------------------------------------
	// Use the namedWindow function to create a window for displaying the video.
	//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







	//-------------------------------------------------------------------------
	// Use the createTrackbar function to create a trackbar and attach it to
	// the window created above.  Use the global frame number currently being
	// displayed to position the slider.  Use the number of frames in the 
	// video file to set the maximal position of the slider.
	// Pass the name of the callback function (onTrackbarSlide) as the pointer
	// to the function to be called every time that the slider changes position.
	// Use the default value of userdata for the last parameter (see the OpenCV
	// function documentation).
	//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







	//-------------------------------------------------------------------------
	// Use a "forever" loop to step through each frame of the video file.
	//-------------------------------------------------------------------------

	for (;;)
	{

		if (g_run != 0)
		{
			// Control code, executed if g_run is 1 (single step) or < 0 (run).


			//-------------------------------------------------------------------------
			// Use the extraction operator (>>) to input one frame from the video stream
			// (the VideoCapture object allocated above), into the image (the Mat object
			// allocated above).
			//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







			//-------------------------------------------------------------------------
			// Use the empty function of the Mat class to test whether the frame is
			// empty (ran out of frames, reached the end of the video.  If this has happened,
			// then break out of the "forever" loop.
			//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







			//-------------------------------------------------------------------------
			// Use the get method of the global VideoCapture object, to get the 0-based 
			// index value, of the frame to be shown next.
			//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







			// Control code.
			g_dontset = true;	// Don't change the display state, continue either run or s. step.







			//-------------------------------------------------------------------------
			// Use the setTrackbarPos function to set the position of the trackbar which
			// is attached to the window created above.  
			// Pass the slider position, obtained above as the new position.
			//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







			//-------------------------------------------------------------------------
			// Use the imshow function to display the image of this single video frame
			// in the window that was created above.
			//-------------------------------------------------------------------------

#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code




			// Control code.
			g_run -= 1;		// If in single step mode, set g_run to 0 so that this code block
							// will not be executed again.
							// If in run mode, continue in run mode.
		}




		//-------------------------------------------------------------------------
		// Use the waitKey function to wait 33 milliseconds, or until the user 
		// presses a key, in the video window.  Use the return value of waitKey
		// to determine whether a key was pressed by the user.  If a key was pressed,
		// break out of the "forever" loop, ending the program.
		//-------------------------------------------------------------------------

		char c = waitKey(33);

		if (c == 's' || c == 'S')
		{
			// single step
			g_run = 1;
			cout << "Single step, run = " << g_run << endl;
		}
		else if (c == 'r' || c == 'R')
		{
			// continuous run
			g_run = -1;
			cout << "Run mode, run = " << g_run << endl;
		}
		else if (c == 27)
		{
			// quit
			break;
		}


	}







	return 0;
}

