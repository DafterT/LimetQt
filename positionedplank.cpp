#include "positionedplank.h"
#include <cmath>

PositionedPlank::PositionedPlank(int x, int y, int height, int width, int price)
  : Plank(height, width, price), x(x), y(y)
{
}

int PositionedPlank::getX() const
{
    return x;
}
int PositionedPlank::getY() const
{
    return y;
}
bool PositionedPlank::include(int radius) const
{
    return sqrt(pow(radius, 2) - pow(radius - y, 2)) + radius >= x + width &&
           sqrt(pow(radius, 2) - pow(radius - x, 2)) + radius >= y + height;
}
