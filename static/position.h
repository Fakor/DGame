#ifndef POSITION_H
#define POSITION_H

#include <cstdint>

class Position
{
public:
    Position(uint16_t x, uint16_t y);

    uint16_t X() const;
    uint16_t Y() const;
private:
    uint16_t x_;
    uint16_t y_;
};

#endif // POSITION_H
