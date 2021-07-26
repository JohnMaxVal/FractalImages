#ifndef FRACTAL_CREATOR_H_
#define FRACTAL_CREATOR_H_

#include <string>
#include <memory>
#include <vector>

#include "Bitmap.h"
#include "Mandelbrot.h"
#include "ZoomList.h"
#include "RGB.h"

namespace bitmap {

    using namespace mandelbrot;
    using namespace zoom;
    using namespace rgb;

    class FractalCreator {
        private:
            int m_width;
            int m_height;
            std::unique_ptr<int[]> m_histogram;
            std::unique_ptr<int[]> m_fractal;
            Bitmap m_bmp;
            ZoomList m_zoomList;
            int m_total{0};
            std::vector<int> m_ranges;
            std::vector<RGB> m_colors;
            std::vector<int> m_rangeTotals;
            bool m_bGotFirstRange {false};

        public:
            FractalCreator(int widht, int height);
            void addZoom(const Zoom& zoom);
            void addRange(double rangeEnd, const RGB& rgb);
            void run(std::string name);

        private:
            void calculateIteration();
            void calculateTotalIterations();
            void calculateRangeTotals();
            void drawFractal();
            void writeBitmap(std::string name);
            int getRange(int iterations) const;
    };

}

#endif