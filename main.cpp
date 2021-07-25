#include <iostream>
#include "Bitmap.h"

using namespace bitmap;

int main() {
    Bitmap bmp(800, 600);

    bmp.write("test.bmp");

    std::cout << "Finished" << std::endl;

    return 0;
}