//============================================================================
// Name        : Bitmap.h
// Author      : Gavin Lyons
// Version     : 1.0
// Copyright   : GPL-3
// Description : Header file for class Bitmap.cpp
//============================================================================

#ifndef BITMAP_H_
#define BITMAP_H_

#include <string>
#include <cstdint>
#include <memory>
using namespace std;

namespace myfractals {

class Bitmap {
private:
	int m_width{0};
	int m_height{0};
	// pointer to allocate memory to describe all pixels on screen
	unique_ptr<uint8_t[]> m_pPixels{nullptr};


public:
	// constructor
	Bitmap(int width, int height);
    // Method, this will set pixels in the bitmap
	void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);
	// Method, to create a bitmap,  passed filename, returns bool
	bool write(string filename);
	// Destructor
	virtual ~Bitmap();
};

} /* namespace myfractals */

#endif /* BITMAP_H_ */
