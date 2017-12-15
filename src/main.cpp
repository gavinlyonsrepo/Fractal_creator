//============================================================================
// Name        : main.cpp
// Author      : Gavin Lyons
// Version     : 1.0
// Copyright   : GPL-3
// Description : Main file for project fractal_creator
// URL         : https://github.com/gavinlyonsrepo/Fractal_creator
//============================================================================

#include <iostream>
#include <random>
#include <string>

#include "FractalCreator.h"
#include "RGB.h"
#include "Zoom.h"


using namespace std;
using namespace myfractals;

int main() {
    //define output file add 4 digit random number to it
    srand(time(NULL));
    string myfilename = "/tmp/Fractal" + to_string(rand() % 10000) + ".bmp";
    //define a header for output
    const string mystringheader = ": Fractal_creator : ";

	cout << mystringheader << "Started." << endl;

    // declare instance of fractal pass in width and height
	FractalCreator myfractal(800, 600);

    // add four ranges 0-1000 passing RGB objects start at black > blue > reddish > yellowish > white
	myfractal.addRange(0.0, RGB(0, 0, 255));
	myfractal.addRange(0.05, RGB(255, 99, 71));
	myfractal.addRange(0.08, RGB(255, 215, 0));
	myfractal.addRange(1.0, RGB(255, 255, 255));

    // Call add-zoom method  pass x y coords and scale
	myfractal.addZoom(Zoom(295, 202, 0.1));
	myfractal.addZoom(Zoom(312, 304, 0.1));


	myfractal.run(myfilename);

    cout << mystringheader << "Output File Created at location : " << myfilename << endl;
    cout << mystringheader << "Finished." << endl;
	return 0;
}
