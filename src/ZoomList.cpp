#include "ZoomList.h"

namespace bitmap {

    namespace zoom {

        ZoomList::ZoomList(int width, int height): m_width(width), m_height(height) {

        }

        void ZoomList::add(const Zoom& zoom) {
            zooms.push_back(zoom);
        }

        std::pair<double, double> ZoomList::zooming(int x, int y) {
            return std::pair<double, double>(0, 0);
        }
    }

}