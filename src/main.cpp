/*!
	@file main.cpp
	@brief   Main file for project fractal_creator
	@details URL https://github.com/gavinlyonsrepo/Fractal_creator
*/

#include <iostream>
#include <random>
#include <string>

#include "FractalCreator.h"
#include "RGB.h"
#include "Zoom.h"


using namespace myfractals;

int main(int argc, char **argv) {

	//define output file add 4 digit random number to it
	srand(time(NULL));

	std::string myfilename = "/tmp/Fractal" + std::to_string(rand() % 10000) + ".bmp";
	//define a header for output
	const std::string mystringheader = ": Fractal_creator : ";

	std::cout << mystringheader << "Started." << std::endl;
	
	//set defaults to command line arguments 
	int widthResolution = 800;
	int heightResolution = 600;
	double zoomScale = 0.1;
	int numberofZooms = 2;

	// Parse command line arguments 
	if (argc != 5)
	{
		std::cout << mystringheader <<  "Number of input arguments :: " << argc << std::endl;
		std::cout <<  mystringheader << "Missing input arguments. using defaults, Should be 5." << std::endl;

	}else
	{
		widthResolution = std::stoi(argv[1]) ;
		heightResolution = std::stoi(argv[2]);
		zoomScale  = std::stod(argv[3]);
		numberofZooms  = std::stoi(argv[4]);
		if(numberofZooms > 2 || numberofZooms < 0)
		{
			std::cout <<  mystringheader << "Number of zooms must be 0 - 2. " << std::endl;
			numberofZooms  = 0;
		}
		std::cout << mystringheader <<  "Width Resolution = " <<  widthResolution << std::endl;
		std::cout << mystringheader<<   "Height Resolution = "  <<  heightResolution << std::endl;
		std::cout << mystringheader<<  "Zoom Scale = " <<  zoomScale << std::endl;
		std::cout << mystringheader<<  "Number of Zooms = " <<  numberofZooms  << std::endl;
	}

	// declare instance of fractal pass in width and height
	FractalCreator myfractal(widthResolution, heightResolution);

	// add four ranges 0-1000 passing RGB objects start at black > blue > reddish > yellowish > white
	myfractal.addRange(0.0, RGB(0, 0, 255)); // blue
	myfractal.addRange(0.05, RGB(255, 99, 71)); // tomato
	myfractal.addRange(0.08, RGB(255, 215, 0)); // gold
	myfractal.addRange(1.0, RGB(255, 255, 255)); //white

	// Call add-zoom method  pass x y coords and scale(smaller number bigger zoom)
	switch(numberofZooms )
	{
		case 0: break; 
		case 1: 
				myfractal.addZoom(Zoom(295, 202, zoomScale));
				break;
		case 2:
				myfractal.addZoom(Zoom(295, 202, zoomScale ));
				myfractal.addZoom(Zoom(312, 304, zoomScale ));
				break;
		default: break;
	}
	

	myfractal.run(myfilename);

	std::cout << mystringheader << "Output File Created at location : " << myfilename << std::endl;
	std::cout << mystringheader << "Finished." << std::endl;
	return 0;
}
