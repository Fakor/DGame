#ifndef DIRECTION_H
#define DIRECTION_H

#include <memory>

#include "position.h"

namespace base{

    class Direction{
    public:
        int16_t x;
        int16_t y;
        Position AddToPosition(const Position& pos) const { return Position(x+pos.X(), y+pos.Y());}
    };

    namespace direction{


        static const Direction NoDirection{0,0};
        static const Direction Up{0,1};
        static const Direction Down{0, -1};
        static const Direction Right{1,0};
        static const Direction Left{-1,0};
    }
}


#endif // DIRECTION_H
