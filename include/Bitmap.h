/*!
 @file Bitmap.h
 @brief   Header file for class Bitmap.cpp
*/

#ifndef BITMAP_H_
#define BITMAP_H_

#include <string>
#include <cstdint>
#include <memory>

namespace myfractals {

class Bitmap {

public:
	// constructor
	Bitmap(int width, int height);
    // Method, this will set pixels in the bitmap
	void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);
	// Method, to create a bitmap,  passed filename, returns bool
	bool write(std::string filename);
	// Destructor
	virtual ~Bitmap();
	
private:
	int m_width{0};
	int m_height{0};
	// pointer to allocate memory to describe all pixels on screen
	std::unique_ptr<uint8_t[]> m_pPixels{nullptr};



};

} /* namespace myfractals */

#endif /* BITMAP_H_ */
