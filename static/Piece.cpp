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

    void Piece::AddMoveRule(base::Rule* rule){
        rules_.push_back(rule);
    }

    void Piece::Move(Position new_pos){
        if(square_ != nullptr){
            square_->RemoveAttribute(attribute_);
        }
        SetPosition(new_pos);
    }

}
