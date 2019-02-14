#include "moveup.h"

namespace rules {

    MoveUp::MoveUp(uint16_t distance)
    : distance_{distance}
    {

    }

    MoveUp::~MoveUp(){

    }

    base::PossibleMoves MoveUp::GetPossibleMoves(base::Position from_pos, base::GridBoard& board){
        base::PossibleMoves moves;
        for (uint16_t i = 1; i <= distance_; ++i) {
            base::Position pos(from_pos.X(), from_pos.Y()-i);
            moves.push_back(board.GetSquarePtr(pos));
        }
        return moves;
    }
}
