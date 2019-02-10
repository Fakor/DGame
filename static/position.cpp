#include "position.h"

Position::Position(uint16_t x, uint16_t y)
    : x_{x}, y_{y}
{

}

uint16_t Position::X() const{
    return x_;
}

uint16_t Position::Y() const{
    return y_;
}
