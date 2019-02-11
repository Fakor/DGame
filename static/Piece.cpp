#include "Piece.h"

namespace base {
    Piece::Piece(Attribute attribute, Position start_pos, GridBoard* board)
        : attribute_{attribute}, board_{board}
    {
        SetPosition(start_pos);
    }

    void Piece::SetPosition(Position pos){
        square_ = board_->GetSquarePtr(pos);
        square_->AddAttribute(attribute_);
    }
}
