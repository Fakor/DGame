#include "Piece.h"

namespace base {

    Piece::Piece()
        : direction_{direction::NoDirection}
    {
    }

    void Piece::SetDirection(Direction direction){
        direction_ = direction;
    }

    const Direction& Piece::GetDesiredDirection() const{
        return direction_;
    }

}
