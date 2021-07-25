#ifndef BITMAP_HEADER_H
#define BITMAP_HEADER_H

#include <cstdint>

#pragma pack(2)

namespace BitmapHeader {

struct BitmapHeader {
    char header[2] {'B', 'M'};
    int32_t fileSize;
    int32_t reserved{0};
    int32_t offset;
};
    
}

#endif