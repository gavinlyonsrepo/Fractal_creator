/*!
 @file Zoomlist.h
 @brief   header file for class zoomlist.cpp class, to store list of zooms
*/

#ifndef ZOOMLIST_H_
#define ZOOMLIST_H_

// to store zoomlist
#include <vector>
// for pair to store pair of values
#include <utility>
#include "Zoom.h"


namespace myfractals {

class ZoomList {
public:

	// constructor stub
	ZoomList(int width, int height);
	// Add a new zoom to list
	void add(const Zoom& zoom);
	//m
	std::pair<double, double> doZoom(int x, int y);
private:
	double m_xCenter{0};
	double m_yCenter{0};
	double m_scale{1.0};

	// width and height of screen
	int m_width{0};
	int m_height{0};
	// vector to store zoom list
	std::vector<Zoom> zooms;
};

} /* namespace myfractals */

#endif /* ZOOMLIST_H_ */
