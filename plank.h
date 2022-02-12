#ifndef PLANK_H
#define PLANK_H

class Plank
{
  protected:
    const int height;  // Высота доски
    const int width;   // Ширина доски
    const int price;   // Ценность доски
    const int area;    // Площадь доски

  public:
    Plank(int height, int width, int price);
    int getArea() const;
    int getPrice() const;
    int getWidth() const;
    int getHeight() const;
    bool checkCorrect() const;
};

#endif  // PLANK_H
