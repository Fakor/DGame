#pragma once

#include <vector>

#include "Attribute.h"
#include "Square.h"
#include "position.h"

namespace base {

	class GridBoard
	{
	public:
        GridBoard(uint16_t width, uint16_t height);
		virtual ~GridBoard();

        void SetSquareAttribute(Position pos, Attribute attribute);
        bool SquareHaveAttribute(Position pos, Attribute attribute);
        void SetAllSquareAttribute(Attribute attribute);

        Square& GetSquare(Position pos);
        const std::vector<Square>& GetAllSquares() const;

		int GetWidth() const;
		int GetHeight() const;
	private:
        uint16_t width_;
        uint16_t height_;

		std::vector<Square> squares_;


	};

}

