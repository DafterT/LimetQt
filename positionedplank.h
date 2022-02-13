#ifndef POSITIONEDPLANK_H
#define POSITIONEDPLANK_H

#include "plank.h"

class PositionedPlank : public Plank
{
  private:
    const int x;
    const int y;

  public:
    PositionedPlank(int x, int y, int height, int width, int price);
    bool checkCorrect() const;
    int getX() const;
    int getY() const;
    bool include(int radius) const;
};

#endif  // POSITIONEDPLANK_H
