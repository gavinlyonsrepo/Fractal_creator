//============================================================================
// Name        : ZoomList.cpp
// Author      : Gavin Lyons
// Version     : 1.0
// Copyright   : GPL-3
// Description :
//============================================================================

#include "ZoomList.h"

using namespace std;

namespace myfractals {

ZoomList::ZoomList(int width, int height) :
		m_width(width), m_height(height) {
	// TODO Auto-generated constructor stub

}

void ZoomList::add(const Zoom& zoom) {
	// storing zoom in the zoom list
	zooms.push_back(zoom);

	m_xCenter += (zoom.x - m_width / 2) * m_scale;
	m_yCenter += -(zoom.y - m_height / 2) * m_scale;

	m_scale *= zoom.scale;
}

// "dozoom" method can coord of pixel and return pair of values
pair<double, double> ZoomList::doZoom(int x, int y) {
	double xFractal = (x - m_width / 2) * m_scale + m_xCenter;
	double yFractal = (y - m_height / 2) * m_scale + m_yCenter;

	return pair<double, double>(xFractal, yFractal);
}

} /* namespace myfractals */
