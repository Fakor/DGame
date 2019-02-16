#ifndef MOVEDOWN_H
#define MOVEDOWN_H

#include <cstdint>

#include "Rule.h"
#include "GridBoard.h"

namespace rules {

    class MoveDown : public base::Rule
    {
    public:
        MoveDown(uint16_t distance);
        virtual ~MoveDown() override;

        base::PossibleMoves GetPossibleMoves(base::Position from_pos, base::GridBoard& board) override;
    private:
        uint16_t distance_;
    };
}

#endif // MOVEDOWN_H
