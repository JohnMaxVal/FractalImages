#include <iostream>
#include "FractalCreator.h"
#include "Zoom.h"

static const int WIDTH = 800;
static const int HEIGHT = 600;

using namespace bitmap;

int main() {

    FractalCreator fc(WIDTH, HEIGHT);

    fc.addRange(0.0, RGB(0, 0, 0));
    fc.addRange(0.3, RGB(255, 0, 0));
    fc.addRange(0.5, RGB(255, 255, 0));
    fc.addRange(1.0, RGB(255, 255, 255));

    fc.addZoom(Zoom(295, 202, 0.1));
    fc.addZoom(Zoom(312, 304, 0.01));

    fc.run("test.bmp");

    std::cout << "Finished" << std::endl;

    return 0;
}