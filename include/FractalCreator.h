#ifndef FRACTAL_CREATOR_H_
#define FRACTAL_CREATOR_H_

#include <string>
#include <memory>

#include "Bitmap.h"
#include "Mandelbrot.h"
#include "ZoomList.h"

namespace bitmap {

    using namespace bitmap;
    using namespace mandelbrot;
    using namespace zoom;

    class FractalCreator {
        private:
            int m_width;
            int m_height;
            std::unique_ptr<int[]> m_histogram;
            std::unique_ptr<int[]> m_fractal;
            Bitmap m_bmp;
            ZoomList m_zoomList;
            int m_total{0};
        public:
            FractalCreator(int width, int height);

            void calculateIteration();
            void calculateTotalIterations();
            void drawFractal();
            void addZoom(const Zoom& zoom);
            void writeBitmap(std::string name);
    };

}

#endif