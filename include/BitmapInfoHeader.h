/*!
 @file BitmapInfoHeader.h
 @brief   header file with information about bitmap which follows bitmap header
*/

#ifndef BITMAPINFOHEADER_H_
#define BITMAPINFOHEADER_H_

#include <cstdint>

using namespace std;

// Specifies packing alignment for struct, get rid of padding bytes
#pragma pack(2)

namespace myfractals {

struct BitmapInfoHeader {
	// size of the struct
	int32_t headerSize{40}; //(9*4)+(2*2) 40 bytes

	// width and height of bitmap
	int32_t width;
	int32_t height;

	int16_t planes{1};

	// one byte (3*8) for each colour
	int16_t bitsPerPixel{24};

	// no compression
	int32_t compression{0};

	// intialize to 0
	int32_t dataSize{0};

    // 2400 bits per pixel
	int32_t horizontalResolution{2400};
	int32_t verticalResolution{2400};

	// intialize to 0
	int32_t colors{0};
	int32_t importantColors{0};
};

}

#endif
