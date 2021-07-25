#ifndef BITMAP_H_
#define BITMAP_H

#include <string>
#include <cstdint>

namespace bitmap {

    class Bitmap {
        private:
            int m_width{0};
            int m_height{0};

        public:
            Bitmap(int width, int height);
            void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);
            bool write(std::string fileanme);
            virtual ~Bitmap();
    };

}

#endif