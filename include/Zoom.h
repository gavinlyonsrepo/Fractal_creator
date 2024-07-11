/*!
 @file Zoom.h
 @brief   header to hold struct for zoom
*/

#ifndef ZOOM_H_
#define ZOOM_H_

namespace myfractals {

struct Zoom {
	int x{0};
	int y{0};
	double scale{0.0};
    // function : initialisations
	Zoom(int x, int y, double scale) : x(x), y(y), scale(scale) {};
};

} /* namespace myfractals */

#endif /* ZOOM_H_ */
