//============================================================================
// Name        : Mandelbrot.h
// Author      : Gavin Lyons
// Version     : 1.0
// Copyright   : GPL-3
// Description : header for the class to draw the Mandelbrot fractal.
//============================================================================

#ifndef MANDELBROT_H_
#define MANDELBROT_H_

namespace myfractals {

class Mandelbrot {
public:
	static const int MAX_ITERATIONS = 1000;

public:
	Mandelbrot();
	virtual ~Mandelbrot();

	static int getIterations(double x, double y);
};

} /* namespace myfractals */

#endif /* MANDELBROT_H_ */
