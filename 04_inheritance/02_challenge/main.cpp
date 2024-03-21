// コードを入力してください
#include <iostream>
#include "circle.hpp"

int main() {
  Circle r5_circle = Circle(5.0);
  std::cout << "area of R5 Circle is " << r5_circle.getArea() << "[m^2]" << std::endl;
  return 0;
}