/*!
 @file Bitmap.cpp
 @brief   Class to contain methods to create bitmap
*/

#include <fstream>

#include "Bitmap.h"
#include "BitmapInfoHeader.h"
#include "BitmapFileHeader.h"

using namespace myfractals;
using namespace std;

namespace myfractals {

// constructor
Bitmap::Bitmap(int width, int height) :
		m_width(width), m_height(height), m_pPixels(
				new uint8_t[width * height * 3] { }) {

}

// Method to create a bitmap,  passed filename, returns bool true if file made.
bool Bitmap::write(string filename) {


	BitmapFileHeader fileHeader;
	BitmapInfoHeader infoHeader;
    // size of fail header info + size of picture + number of pixels (3 every pixel takes 3 bytes)
	fileHeader.fileSize = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader)
			+ m_width * m_height * 3;

	// data offset the distance of beginning of file to where data starts
	fileHeader.dataOffset = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader);

	// height and width of bitmap.
	infoHeader.width = m_width;
	infoHeader.height = m_height;

    // create new ofstream object
	ofstream file;
	// create binary file
	file.open(filename, ios::out | ios::binary);

	if (!file) {
		return false;
	}
    // Wriet the file header the info header and the bitmap.
	file.write((char *) &fileHeader, sizeof(fileHeader));
	file.write((char *) &infoHeader, sizeof(infoHeader));
	file.write((char *) m_pPixels.get(), m_width * m_height * 3);

	file.close();

	if (!file) {
		return false;
	}

	return true;
}

// set pixel method this will set pixels in the bitmap
void Bitmap::setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue) {
	// set a pointer to whole memory block that represents screen
	uint8_t *pPixel = m_pPixels.get();

	pPixel += (y * 3) * m_width + (x * 3);

	pPixel[0] = blue;
	pPixel[1] = green;
	pPixel[2] = red;
}

Bitmap::~Bitmap() {
	// TODO Auto-generated destructor stub
}

} /* namespace myfractals*/
