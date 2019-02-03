#include "GridBoard.h"

namespace base {
	GridBoard::GridBoard(int width, int height)
		: width_{ width }, height_{height}
	{
		squares_.resize(width_*height_);
	}


	GridBoard::~GridBoard()
	{
	}

	void GridBoard::SetSquareAttribute(int x, int y, Attribute attribute) {
		GetSquare(x, y).SetAttributes({ attribute });
	}

	bool GridBoard::SquareHaveAttribute(int x, int y, Attribute attribute) {
		return GetSquare(x, y).HaveAttribute(attribute);
	}

	int GridBoard::GetWidth() const {
		return width_;
	}

	int GridBoard::GetHeight() const {
		return height_;
	}

	Square& GridBoard::GetSquare(int x, int y) {
		return squares_[y*width_ + x];
	}
}
