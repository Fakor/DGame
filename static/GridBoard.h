#pragma once

#include <vector>

#include "Attribute.h"
#include "Square.h"

namespace base {

	class GridBoard
	{
	public:
        GridBoard(uint16_t width, uint16_t height);
		virtual ~GridBoard();

        void SetSquareAttribute(uint16_t x, uint16_t y, Attribute attribute);
        bool SquareHaveAttribute(uint16_t x, uint16_t y, Attribute attribute);
        void SetAllSquareAttribute(Attribute attribute);

        Square& GetSquare(uint16_t x, uint16_t y);
        const std::vector<Square>& GetAllSquares() const;

		int GetWidth() const;
		int GetHeight() const;
	private:
        uint16_t width_;
        uint16_t height_;

		std::vector<Square> squares_;


	};

}

