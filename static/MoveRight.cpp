#include "MoveRight.h"

namespace rules {

    MoveRight::MoveRight(uint16_t distance)
    : distance_{distance}
    {

    }

    MoveRight::~MoveRight(){

    }

    base::PossibleMoves MoveRight::GetPossibleMoves(base::Position from_pos, base::GridBoard& board){
        base::PossibleMoves moves;
        for (uint16_t i = 1; i <= distance_; ++i) {

            uint16_t x = from_pos.X()+i;
            base::Position pos(x, from_pos.Y());
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
