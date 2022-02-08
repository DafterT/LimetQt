#include "plank.h"

Plank::Plank(int height, int width, int price)
  : height(height), width(width), price(price), area(height * width)
{
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
