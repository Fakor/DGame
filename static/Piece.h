#ifndef PIECE_H
#define PIECE_H

#include "Attribute.h"
#include "GridBoard.h"
#include "position.h"

namespace base{
    class Piece
    {
    public:
        Piece(Attribute attribute, Position start_pos, GridBoard* board);

    private:
        Attribute attribute_;
        GridBoard* board_;
        Square* square_{nullptr};

        void SetPosition(Position pos);
    };
}

#endif // PIECE_H
