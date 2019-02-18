#include "GridBoard.h"

namespace base {
    GridBoard::GridBoard(uint16_t width, uint16_t height)
		: width_{ width }, height_{height}
	{
        for(uint16_t y = 0; y < height; ++y){
            for(uint16_t x = 0; x < width_; ++x){
                squares_.emplace_back(Square({x,y}));
            }
        }
	}


	GridBoard::~GridBoard()
	{
	}

    void GridBoard::SetSquareAttribute(const Position& pos, Attribute attribute) {
        PositionWithinBoard(pos);
        GetSquarePtrUnsfafe(pos)->SetAttributes({ attribute });
	}

    void GridBoard::SetAllSquareAttribute(Attribute attribute){
        for(auto& square: squares_){
            square.SetAttributes({attribute});
        }
    }

    void GridBoard::MoveAttribute(Attribute attribute, const Position& from, const Position& to){
        GetSquare(from).RemoveAttribute(attribute);
        GetSquare(to).AddAttribute(attribute);
    }

    bool GridBoard::SquareHaveAttribute(const Position& pos, Attribute attribute) {
        PositionWithinBoard(pos);
        return GetSquarePtrUnsfafe(pos)->HaveAttribute(attribute);
	}

	int GridBoard::GetWidth() const {
		return width_;
	}

	int GridBoard::GetHeight() const {
		return height_;
	}

    Square& GridBoard::GetSquare(const Position& pos) {
        PositionWithinBoard(pos);
        return *GetSquarePtrUnsfafe(pos);
    }

    Square* GridBoard::GetSquarePtr(const Position& pos) {
        PositionWithinBoard(pos);
        return GetSquarePtrUnsfafe(pos);
    }

    const std::vector<Square>& GridBoard::GetAllSquares() const{
        return squares_;
    }

    Square* GridBoard::GetSquarePtrUnsfafe(const Position& pos){
        return &squares_[pos.Y()*width_ + pos.X()];
    }

    void GridBoard::PositionWithinBoard(const Position &pos){
        if((pos.X() >= width_) || (pos.Y() >= height_)){
            std::string error = "Position: " + std::to_string(pos.X()) + ", " +
                                std::to_string(pos.Y()) + " is not a valid within board.";
            throw std::invalid_argument(error);
        }
    }
}
