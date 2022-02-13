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

bool PositionedPlank::checkCorrect() const
{
    return Plank::checkCorrect() && x >= 0 && y >= 0;
}

// Проверка, что доска входит в окружность радиуса radius
bool PositionedPlank::include(int radius) const
{
    return sqrt(2 * radius * y - y * y) + radius >= x + width &&
           sqrt(2 * radius * x - x * x) + radius >= y + height &&
           radius - sqrt(2 * radius * y - y * y) <= x &&
           radius - sqrt(2 * radius * x - x * x) <= y;
}
