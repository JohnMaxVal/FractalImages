#include <iostream>
#include "Bitmap.h"
#include "Mandelbrot.h"

using namespace bitmap;
using namespace mandelbrot;

static const int WIDTH = 800;
static const int HEIGHT = 600;

int main() {
    Bitmap bmp(WIDTH, HEIGHT);

    double min = 999999;
    double max = -999999;

    for(int y = 0; y < HEIGHT; ++y) {
        for(int x = 0; x < WIDTH; ++x) {
            double xFractal = (x - WIDTH/2.0 - 200) * 2.0/WIDTH;
            double yFractal = (y - HEIGHT/2.0) * 2.0/HEIGHT;

            int iterations = Mandelbrot::getIterations(xFractal, yFractal);

            uint8_t red = (uint8_t)(256 * (double)iterations/Mandelbrot::MAX_ITERATIONS);

            bmp.setPixel(x, y, red, 0x0, 0x0);

            if(red < min) min = red;
            if(red > max) max = red;
        }
    }

    std::cout << min << ", " << max << std::endl;

    bmp.write("test.bmp");

    std::cout << "Finished" << std::endl;

    return 0;
}