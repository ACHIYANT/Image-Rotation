//
//  main.cpp
//  opencvtest
//
//  Created by ACHIYANT  on 25/12/20.
//

#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;
using namespace std;
int main()
{
    //This " /Users/achiyant/Desktop/opencvtest/opencvtest/india.png " is the path name of image please change it accorgin to your image path name .
    Mat img = imread("/Users/achiyant/Desktop/opencvtest/opencvtest/india.png", 1);
    imshow("img", img); //use to show the image as enterd by user as a path name .
    waitKey(1);
    double X, Y;
    cout << "Enter the angle of image by which you want to rotate the image :-" << endl;
    double angle;
    cin >> angle; //Take the angle input from user for the rotation of image .

    //check the width and height of the image
    double width = img.size().width;
    double height = img.size().height;

    //These functions used here so that to avoid the corners cutting during the rotation of image
    Point2d center = Point2d(width / 2, height / 2);
    Rect bounds = RotatedRect(center, img.size(), angle).boundingRect();
    Mat resized = Mat::zeros(bounds.size(), img.type());
    X = (bounds.width - width) / 2;
    Y = (bounds.height - height) / 2;
    Rect roi = Rect(X, Y, width, height);
    img.copyTo(resized(roi));
    center += Point2d(X, Y);

    //Image rotated by the use of getRotationMatrix2D function.
    Mat M = getRotationMatrix2D(center, angle, 1.0);
    warpAffine(resized, resized, M, resized.size());
    imwrite("rotated_im.png", resized);
    namedWindow("image", WINDOW_NORMAL);
    imshow("image", resized); //it will show the rotated image
    waitKey(0);               //Wait key used to hold the window.

    return 0;
}
