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
        int16_t new_pos_x = GetPosition().X() + direction_.x;
        int16_t new_pos_y = GetPosition().Y() + direction_.y;
        if(new_pos_x < 0 || new_pos_y < 0){
            std::string error = "Position: " + std::to_string(GetPosition().X()) + ", " +
                                std::to_string(GetPosition().Y()) + " cant move to " +
                                std::to_string(direction_.x) + ", " + std::to_string(direction_.y);
            throw std::invalid_argument("");
        }
        Position move_to(static_cast<uint16_t>(new_pos_x), static_cast<uint16_t>(new_pos_y));
        SetPosition(move_to);
    }

    void Piece::AddMoveRule(base::Rule* rule){
        rules_.push_back(rule);
    }

}
