#include "Move.h"

namespace rules {

    Move::Move(uint16_t distance, std::initializer_list<base::Direction> directions)
        : distance_{distance}, directions_{directions}
    {

    }

    Move::~Move(){

    }

    base::PossibleMoves Move::GetPossibleMoves(base::Position from_pos, base::GridBoard& board){
        base::PossibleMoves moves;
        for (auto& dir: directions_) {
            for (uint16_t i = 1; i <= distance_; ++i) {
                int16_t x = from_pos.X()+dir.x*i;
                int16_t y = from_pos.Y()+dir.y*i;
                if(x < 0 || y < 0){
                    break;
                }
                base::Position pos(static_cast<uint16_t>(x), static_cast<uint16_t>(y));
                try {
                    moves.push_back(board.GetSquarePtr(pos));
                }
                catch(std::invalid_argument){
                    break;
                }
            }
        }
        return moves;
    }
}
