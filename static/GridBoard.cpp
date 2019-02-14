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

    void GridBoard::SetSquareAttribute(Position pos, Attribute attribute) {
        GetSquare(pos).SetAttributes({ attribute });
	}

    void GridBoard::SetAllSquareAttribute(Attribute attribute){
        for(auto& square: squares_){
            square.SetAttributes({attribute});
        }
    }

    bool GridBoard::SquareHaveAttribute(Position pos, Attribute attribute) {
        return GetSquare(pos).HaveAttribute(attribute);
	}

	int GridBoard::GetWidth() const {
		return width_;
	}

	int GridBoard::GetHeight() const {
		return height_;
	}

    Square& GridBoard::GetSquare(Position pos) {
        return squares_[pos.Y()*width_ + pos.X()];
	}

    Square* GridBoard::GetSquarePtr(Position pos) {
        return &GetSquare(pos);
    }

    const std::vector<Square>& GridBoard::GetAllSquares() const{
        return squares_;
    }
}
