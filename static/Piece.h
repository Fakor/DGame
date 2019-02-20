#pragma once

#include <vector>
#include <memory>
#include <utility>
#include <stdexcept>

#include "position.h"
#include "direction.h"

namespace base{
    class Piece
    {
    public:
        Piece();

        void SetDirection(Direction direction);
        const Direction& GetDesiredDirection() const;
    private:
        base::Direction direction_;

    };
}

