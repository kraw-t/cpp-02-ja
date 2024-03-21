// コードを入力してください
#pragma once
#include "shape.hpp"

class Circle : public Shape {
public:
  Circle(double radius);
  double getArea(void) const override;

private:
  double m_radius;  // [m]
};
