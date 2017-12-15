//============================================================================
// Name        : FractalCreator.h
// Author      : Gavin Lyons
// Version     : 1.0
// Copyright   : GPL-3
// Description : header file to hold headers for class FractalCreator in FractalCreator.cpp
//============================================================================

#ifndef FRACTALCREATOR_H_
#define FRACTALCREATOR_H_

#include <string>
#include <cstdint>
#include <memory>
#include <math.h>
#include <vector>
#include "Zoom.h"
#include "Mandelbrot.h"
#include "Bitmap.h"
#include "ZoomList.h"
#include "RGB.h"

using namespace std;

namespace myfractals {

class FractalCreator {
private:
	int m_width;
	int m_height;
	unique_ptr<int[]> m_histogram;
	unique_ptr<int[]> m_fractal;
	Bitmap m_bitmap;
	ZoomList m_zoomList;
	int m_total { 0 };

	vector<int> m_ranges;
	vector<RGB> m_colors;
	// a vector of ints
	vector<int> m_rangeTotals;
    // A bool flag to make sure not to add a zero range total
	bool m_bGotFirstRange{false};

private:
	// first nested loop from main method
	void calculateIteration();

    // method to calculate Iterations
	void calculateTotalIterations();


	void calculateRangeTotals();

	// second nested loop from main method
	void drawFractal();
	// write the bitmap pass it a filename
	void writeBitmap(string name);

	int getRange(int iterations) const;

public:
	FractalCreator(int width, int height);
	void addRange(double rangeEnd, const RGB& rgb);

	// method add-zoom const zoom ref
	void addZoom(const Zoom& zoom);

	virtual ~FractalCreator();
	// method to create bitmap
	void run(string name);
};

} /* namespace myfractals */

#endif /* FRACTALCREATOR_H_ */
