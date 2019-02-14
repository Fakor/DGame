#ifndef MOVEUP_H
#define MOVEUP_H

#include <cstdint>

#include "Rule.h"
#include "GridBoard.h"

namespace rules{

    class MoveUp: public base::Rule
    {
    public:
        MoveUp(uint16_t distance);
        virtual ~MoveUp() override;

        base::PossibleMoves GetPossibleMoves(base::Position from_pos, base::GridBoard& board) override;
    private:
        uint16_t distance_;
    };

}

#endif // MOVEUP_H
