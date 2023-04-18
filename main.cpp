#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/objdetect.hpp>
#include<iostream>
#include<ctime>


using namespace std;
using namespace cv;
void facesc() {
	VideoCapture video(0);
	CascadeClassifier facedetect;
	Mat img;
	facedetect.load("haarcascade_frontalface_default.xml");
	
	while (true) {
	
		video.read(img);

		vector<Rect> faces;

		facedetect.detectMultiScale(img, faces, 1.5, 5);

	//	cout << faces.size() << endl;

		for (int i = 0; i < faces.size(); i++) {
			rectangle(img, faces[i].tl(), faces[i].br(), Scalar(204, 255, 255), 1);
			rectangle(img, Point(0, 0), Point(250, 70), Scalar(204, 255, 204), FILLED);
			putText(img, to_string(faces.size()) + " Face Found", Point(10, 40), FONT_HERSHEY_DUPLEX, 1, 1);

		}


		imshow("Frame", img);
		waitKey(1);


	}
}

int  main() {
	int reg;
	cout << "_________________________________________________________________" << endl;
	cout <<" |Enter Your Register Number : ";
	cin >> reg;
	cout << endl;
	

	while (reg > 0) {
		int rem = reg % 10000;
		if (rem == 1210) {
			cout << "_________________________________________________________________" << endl;
			cout << "|You are from SECOUND year K21 Batch                             |" << endl;
			cout << "|________________________________________________________________|" << endl;
			cout << ":::::::::::::::::::::::::::MAKE A GOOD POSTURE FOR FACE IDENTIFICATION::::::|" << endl;
			void facesc();
			facesc();
			exit;

		}
		else if (rem == 1200) {
	
			cout << "_________________________________________________________________" << endl;
			cout << "|You are from THIRD year K20 Batch                               |" << endl;
			cout << "|________________________________________________________________|" << endl;
			cout << ":::::::::::::::::::::::::::MAKE A GOOD POSTURE FOR FACE IDENTIFICATION::::::|" << endl;
			void facesc();
			facesc();
			exit;

		}
		else if (rem == 1221) {
			cout << "_________________________________________________________________" << endl;
			cout << "|You are from FIRSH year K22 Batch                               |" << endl;
			cout << "|________________________________________________________________|" << endl;
			cout << ":::::::::::::::::::::::::::MAKE A GOOD POSTURE FOR FACE IDENTIFICATION::::::|" << endl;
			void facesc();
			facesc();
			exit;
		}
		else {

			cout << "_________________________________________________________________" << endl;
			cout << "|OUT OF DATA                                                     |" << endl;
			cout << "|________________________________________________________________|" << endl;
		}
		reg /= 10;

	}
	
		return 0;

}