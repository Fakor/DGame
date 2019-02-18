#ifndef MOVEUP_H
#define MOVEUP_H

#include <cstdint>
#include <initializer_list>

#include "Rule.h"
#include "GridBoard.h"
#include "direction.h"

namespace rules{

    class Move: public base::Rule
    {
    public:
        Move(uint16_t distance, std::initializer_list<base::Direction> directions);
        virtual ~Move() override;

        base::PossibleMoves GetPossibleMoves(base::Position from_pos, base::GridBoard& board) override;
    private:
        uint16_t distance_;
        std::vector<base::Direction> directions_;
    };

}

#endif // MOVEUP_H
