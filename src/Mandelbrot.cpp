/*!
 @file Mandelbrot.cpp
 @brief   class to plot mandelbrot
*/

// complex numbers lib
#include <complex>
#include "Mandelbrot.h"

using namespace std;

namespace myfractals {

Mandelbrot::Mandelbrot() {
	// TODO Auto-generated constructor stub

}

Mandelbrot::~Mandelbrot() {
	// TODO Auto-generated destructor stub
}

int Mandelbrot::getIterations(double x, double y) {

	complex<double> z = 0;
	complex<double> c(x, y);

	int iterations = 0;

	while(iterations < MAX_ITERATIONS) {
		z = z*z + c;

		// get magnitude of complex number if exceeds two break.
		if(abs(z) > 2) {
			break;
		}

		iterations++;
	}

	return iterations;
}

} /* namespace myfractals */
