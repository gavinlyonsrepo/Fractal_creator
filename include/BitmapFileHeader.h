//============================================================================
// Name        : BitmapFileHeader.h
// Author      : Gavin Lyons
// Version     : 1.0
// Copyright   : GPL-3
// Description : Header file to make valid bitmap file header
//============================================================================

#ifndef BITMAPFILEHEADER_H_
#define BITMAPFILEHEADER_H_

#include <cstdint>

using namespace std;

// Specifies packing alignment for struct, get rid of padding bytes
#pragma pack(2)

namespace myfractals {

// Struct to be written to top of file.
struct BitmapFileHeader {
	char header[2] { 'B', 'M' };
	int32_t fileSize;
	int32_t reserved { 0 };
	int32_t dataOffset;
};

}

#endif /* BITMAPFILEHEADER_H_ */
