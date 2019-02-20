#pragma once

#include <vector>

#include "Square.h"
#include "GridBoard.h"

namespace base {

    using PossibleMoves = std::vector<base::Square*>;

    class Rule
    {
    public:
        Rule() = default;
        virtual ~Rule() = default;
        virtual PossibleMoves GetPossibleMoves(base::Position from_pos, base::GridBoard& board) = 0;
    };

}

