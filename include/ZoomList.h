//============================================================================
// Name        : Zoomlist.h
// Author      : Gavin Lyons
// Version     : 1.0
// Copyright   : GPL-3
// Description : header file for class zoomlist.cpp class, to store list of zooms
//============================================================================

#ifndef ZOOMLIST_H_
#define ZOOMLIST_H_

// to store zoomlist
#include <vector>
// for pair to store pair of values
#include <utility>

#include "Zoom.h"

using namespace std;

namespace myfractals {

class ZoomList {
private:
	double m_xCenter{0};
	double m_yCenter{0};
	double m_scale{1.0};

	// width and height of screen
	int m_width{0};
	int m_height{0};
	// vector to store zoom list
	vector<Zoom> zooms;

public:

	// constructor stub
	ZoomList(int width, int height);
	// Add a new zoom to list
	void add(const Zoom& zoom);
	//
	pair<double, double> doZoom(int x, int y);
};

} /* namespace myfractals */

#endif /* ZOOMLIST_H_ */
