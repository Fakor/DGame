#ifndef DIRECTION_H
#define DIRECTION_H

#include <memory>

#include "position.h"

namespace base{
    using Direction = const base::Position;
    namespace direction{


        static Direction NoDirection{0,0};
        static Direction Up{0,1};
    }
}


#endif // DIRECTION_H
