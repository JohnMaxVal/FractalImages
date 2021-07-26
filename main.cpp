#include <iostream>
#include "FractalCreator.h"

static const int WIDTH = 800;
static const int HEIGHT = 600;

using namespace bitmap;
using namespace bitmap::rgb;

int main() {

    FractalCreator fc(WIDTH, HEIGHT);

    fc.run("test.bmp");

    std::cout << "Finished" << std::endl;

    return 0;
}