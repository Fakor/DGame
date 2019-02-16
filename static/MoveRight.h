#ifndef MOVERIGHT_H
#define MOVERIGHT_H

#include <cstdint>

#include "Rule.h"
#include "GridBoard.h"

namespace rules{

    class MoveRight: public base::Rule
    {
    public:
        MoveRight(uint16_t distance);
        virtual ~MoveRight() override;

        base::PossibleMoves GetPossibleMoves(base::Position from_pos, base::GridBoard& board) override;
    private:
        uint16_t distance_;
    };
}

#endif // MOVERIGHT_H
