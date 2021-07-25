#include <fstream>

#include "Bitmap.h"
#include "BitmapInfoHeader.h"
#include "BitmapFileHeader.h"

namespace bitmap {

    Bitmap::Bitmap(int width, int height) :
        m_width(width),
        m_height(height),
        m_pPixels(new uint8_t[width * height * 3] {}) {

    }

    bool Bitmap::write(std::string filename) {
        BitmapFileHeader bmpFileHeader;
        BitmapInfoHeader bmpInfoHeader;

        bmpFileHeader.fileSize = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader) + m_width * m_height * 3;
        bmpFileHeader.offset = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader);

        bmpInfoHeader.width = m_width;
        bmpInfoHeader.height = m_height;

        std::ofstream file;
        file.open(filename, std::ios::out | std::ios::binary);

        if(!file) {
            return false;
        }

        file.write((char *)&bmpFileHeader, sizeof(bmpFileHeader));
        file.write((char *)&bmpInfoHeader, sizeof(bmpInfoHeader));
        file.write((char*)m_pPixels.get(), m_width * m_height * 3);

        file.close();

        if(!file) {
            return false;
        }

        return true;
    }

    void Bitmap::setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue) {

    }

    Bitmap::~Bitmap() {
        
    }

}