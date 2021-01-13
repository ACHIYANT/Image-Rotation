# Image Rotation
This is a C++ program for image rotation. User have to enter the angle (e.g. 30 for 30 º clockwise image rotation, -45 for 45 º anti-clockwise image rotation) by which he/she want to rotate their image.

# Installation 
 

## Mac OS User 

	Open Terminal for installation of Homebrew package. If you have pre-installed Homebrew package then you can ignore this step.

	/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)" Copy this command and paste in terminal. 

	brew install opencv 
After installation of complete Homebrew now run this 
(above highlighted) command to install OpenCV library.

	https://apps.apple.com/in/app/xcode/id497799835?mt=12
Now Install XCode from Appstore or from above given link.

	Open XCode and make new project. choose command line tool from the given options. and give the desired project name. choose language C++ from the drop-down list.

	Now to use OpenCV in our program we have to add different dynamic libraries. for that right click on “project name” in the left side pane and click on “add files to project name”. It will open window so just click ‘cmd ⌘+ shift + G’ and type “/usr/local/cellar/opencv” and click on Go. It will redirect to the opencv folder directly.

	Now move inside to the “lib” folder and select files with extension of “.dylib“ and then click on add .

	Now we have to add Headers. To add it just left click on project name in the left side bar of XCode and click on build setting. Now type” header search path” in the search tool. Now click on Header search path option given below. Now right click on blank space in front of header search oath option it will open popup window. on the bottom of the window there is. “+” just click on it. Now type “/usr/local/cellar/opencv/4.5.0_5/include/opencv4” (4.5.0_5 is my current version of opencv change it according to your version) and in the right side there is option select “recursive” option from it. 

	Now click on “signing and capabilities” option and under “Hardened runtime” just check the “Disable library validation” option.

	Now move to “main.cpp “from your left pane under your project name and copy the program given in this repository.

	Congrats! After so many steps you are done now. Click on build and try it.


 **If you need video tutorial for use of open cv C++ with XCode then go through with this video tutorial :- https://www.youtube.com/watch?v=DnQoPaYGFzw&feature=youtu.be&ab_channel=JaydeepGubba
 
Video credit goes to original creator.


## Window User 

	For step by step process use this website 
https://medium.com/analytics-vidhya/vs-code-with-opencv-c-on-windows-10-explained-256418442c52

**If you need video tutorial for use of open cv C++ with XCode then go through with this video tutorial: -
https://youtu.be/riArxlmRMoQ

Video credit goes to original creator






# Contributing
 

Pull requests are welcome. Please open an issue first to discuss what you would like to change.

# License
 

Owner of this git repository.
