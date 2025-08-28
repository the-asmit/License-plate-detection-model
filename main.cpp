#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/objdetect.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/////////////// License Plate Detector //////////////////////

int main() {

	Mat img;
	VideoCapture cap(0); //captures webcam

	CascadeClassifier plateCascade; //CascadeClassifier is a fn of openCV which reads pre-trained model through .xml files
	plateCascade.load("C:/Users/dell/Desktop/license_plate/haarcascade_russian_plate_number.xml");

	if (plateCascade.empty()) { 
        cout << "XML file not loaded" << endl; 
    }

	vector<Rect> plates; //vector of Rect data type since the saved img will be in the form of rectangle

	while (true) {

		cap.read(img); //reads each frame of video as video is just a collection of images
		plateCascade.detectMultiScale(img, plates, 1.1, 10); //this fn will be used to detect object from source

		for (int i = 0; i < plates.size(); i++)
		{
			Mat imgCrop = img(plates[i]); //the number plate cropped img from the videocaputed

			// imshow(to_string(i), imgCrop);
			imwrite("C:/Users/dell/Desktop/license_plate" + to_string(i) + ".png", imgCrop); //saves cropped img to this location

			rectangle(img, plates[i].tl(), plates[i].br(), Scalar(255, 0, 255), 3); //the rectangle that appears around the plates
		}

		imshow("Image", img); //opens the img/video/webcam, etc.
		waitKey(1);
	}
}