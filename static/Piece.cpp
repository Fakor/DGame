#include "Piece.h"

namespace base {
    Piece::Piece(Attribute attribute, Position start_pos, GridBoard* board)
        : attribute_{attribute}, board_{board}, pos_{start_pos}, direction_{direction::NoDirection}
    {
        board_->SetSquareAttribute(start_pos, attribute_);
    }

    void Piece::SetPosition(Position new_pos){
        board_->MoveAttribute(attribute_, GetPosition(), new_pos);
        pos_ = new_pos;
    }

    const Position& Piece::GetPosition() const{
        return pos_;
    }

    void Piece::SetDirection(Direction direction){
        direction_ = direction;
    }

    void Piece::MoveInDirection(){
        Position move_to(GetPosition().X()+direction_.X(), GetPosition().Y()+direction_.Y());
        SetPosition(move_to);
    }

    void Piece::AddMoveRule(base::Rule* rule){
        rules_.push_back(rule);
    }

}
