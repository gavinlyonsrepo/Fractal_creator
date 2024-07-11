/*!
 @file RGB.cpp
 @brief   A class to display and change RGB colour
*/

#include "RGB.h"

namespace myfractals {
//constructor : initialisation

RGB::RGB(double r, double g, double b): r(r), g(g), b(b) {


}

// operator to subtract one RGB from another to create a hue
RGB operator-(const RGB& first, const RGB& second) {
	return RGB(first.r - second.r, first.g - second.g, first.b - second.b);
}

} /* namespace myfractals */
