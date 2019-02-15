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

            uint16_t y = from_pos.Y()+i;
            base::Position pos(from_pos.X(), y);
            try {
                moves.push_back(board.GetSquarePtr(pos));
            }
            catch(std::invalid_argument){
                break;
            }
        }
        return moves;
    }
}
