#include "GridBoard.h"

namespace base {
    GridBoard::GridBoard(uint16_t width, uint16_t height)
		: width_{ width }, height_{height}
	{
		squares_.resize(width_*height_);
	}


	GridBoard::~GridBoard()
	{
	}

    void GridBoard::SetSquareAttribute(uint16_t x, uint16_t y, Attribute attribute) {
		GetSquare(x, y).SetAttributes({ attribute });
	}

    void GridBoard::SetAllSquareAttribute(Attribute attribute){
        for(auto& square: squares_){
            square.SetAttributes({attribute});
        }
    }

    bool GridBoard::SquareHaveAttribute(uint16_t x, uint16_t y, Attribute attribute) {
		return GetSquare(x, y).HaveAttribute(attribute);
	}

	int GridBoard::GetWidth() const {
		return width_;
	}

	int GridBoard::GetHeight() const {
		return height_;
	}

    Square& GridBoard::GetSquare(uint16_t x, uint16_t y) {
		return squares_[y*width_ + x];
	}
}
