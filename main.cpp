#include <iostream>
#include "FractalCreator.h"

static const int WIDTH = 800;
static const int HEIGHT = 600;

using namespace bitmap;

int main() {

    FractalCreator fc(WIDTH, HEIGHT);

    fc.addZoom(Zoom(295, HEIGHT - 202, 0.1));
    fc.addZoom(Zoom(312, HEIGHT - 304, 0.01));

    fc.calculateIteration();
    fc.calculateTotalIterations();
    fc.drawFractal();

    fc.writeBitmap("test.bmp");

    std::cout << "Finished" << std::endl;

    return 0;
}