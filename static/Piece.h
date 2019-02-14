#ifndef PIECE_H
#define PIECE_H

#include <vector>

#include "Attribute.h"
#include "GridBoard.h"
#include "position.h"
#include "Rule.h"

namespace base{
    class Piece
    {
    public:
        Piece(Attribute attribute, Position start_pos, GridBoard* board);

        void AddMoveRule(base::Rule* rule);

        void Move(Position new_pos);

    private:
        Attribute attribute_;
        GridBoard* board_;
        Square* square_{nullptr};
        std::vector<base::Rule*> rules_;

        void SetPosition(Position pos);
    };
}

#endif // PIECE_H
