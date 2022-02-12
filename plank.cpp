#include "plank.h"

Plank::Plank(int height, int width, int price)
  : height(height), width(width), price(price), area(height * width)
{
}

bool Plank::checkCorrect() const
{
    return height > 0 && width > 0 && price > 0;
}

int Plank::getHeight() const
{
    return height;
}
int Plank::getWidth() const
{
    return width;
}
int Plank::getPrice() const
{
    return price;
}
int Plank::getArea() const
{
    return area;
}
