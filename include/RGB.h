//============================================================================
// Name        : RGB.h
// Author      : Gavin Lyons
// Version     : 1.0
// Copyright   : GPL-3
// Description : header file for RGB.cpp containing a class for displaying  RGB colour
//============================================================================

#ifndef RGB_H_
#define RGB_H_

namespace myfractals {

struct RGB {
	double r;
	double g;
	double b;

	RGB(double r, double g, double b);
};

// operator to subtract one RGB from another to create a hue
RGB operator-(const RGB& first, const RGB& second);

} /* namespace myfractals */



#endif /* RGB_H_ */
