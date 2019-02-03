#pragma once

#include <vector>

#include "Attribute.h"
#include "Square.h"

namespace base {

	class GridBoard
	{
	public:
		GridBoard(int width, int height);
		virtual ~GridBoard();

		void SetSquareAttribute(int x, int y, Attribute attribute);
		bool SquareHaveAttribute(int x, int y, Attribute attribute);

		int GetWidth() const;
		int GetHeight() const;
	private:
		int width_;
		int height_;

		std::vector<Square> squares_;

		Square& GetSquare(int x, int y);
	};

}

