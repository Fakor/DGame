#pragma once

#include <vector>
#include <map>
#include <stdexcept>
#include <string>

#include "Attribute.h"
#include "Square.h"
#include "position.h"
#include "Piece.h"

namespace base {

	class GridBoard
	{
	public:
        GridBoard(uint16_t width, uint16_t height);
		virtual ~GridBoard();

        void SetSquareAttribute(const Position& pos, Attribute attribute);
        bool SquareHaveAttribute(const Position& pos, Attribute attribute);
        void SetAllSquareAttribute(Attribute attribute);

        void AddPiece(Piece* piece, Position pos);
        const Position& GetPiecePosition(Piece* piece);
        void MoveAttribute(Attribute attribute, const Position& from, const Position& to);

        Square& GetSquare(const Position& pos);
        Square* GetSquarePtr(const Position& pos);
        const std::vector<Square>& GetAllSquares() const;

		int GetWidth() const;
		int GetHeight() const;

        void PerformTurn();
	private:
        uint16_t width_;
        uint16_t height_;

		std::vector<Square> squares_;
        std::map<Piece*, Position> pieces_;

        Square* GetSquarePtrUnsfafe(const Position& pos);
        void PositionWithinBoard(const Position& pos);
	};

}

