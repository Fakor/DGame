#ifndef MOVELEFT_H
#define MOVELEFT_H

#include "Rule.h"

namespace rules{

    class MoveLeft : public base::Rule
    {
    public:
        MoveLeft(uint16_t distance);
        virtual ~MoveLeft() override;

        base::PossibleMoves GetPossibleMoves(base::Position from_pos, base::GridBoard& board) override;
    private:
        uint16_t distance_;
    };
}


#endif // MOVELEFT_H
