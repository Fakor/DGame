#ifndef PIECE_H
#define PIECE_H

#include <vector>
#include <memory>
#include <utility>

#include "Attribute.h"
#include "GridBoard.h"
#include "position.h"
#include "direction.h"
#include "Rule.h"

namespace base{
    class Piece
    {
    public:
        Piece(Attribute attribute, Position start_pos, GridBoard* board);

        void SetDirection(Direction direction);
        void AddMoveRule(base::Rule* rule);

        void MoveInDirection();
        void SetPosition(Position pos);
        const Position& GetPosition() const;
    private:
        Attribute attribute_;
        GridBoard* board_;
        Position pos_;
        std::vector<base::Rule*> rules_;

        base::Position direction_;

    };
}

#endif // PIECE_H
