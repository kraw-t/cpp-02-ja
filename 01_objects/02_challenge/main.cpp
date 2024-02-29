// コードを入力してください
#include <iostream>
#include <string>
#include "rectangle.h"

int main() {
  Rectangle rectangle;
  rectangle.height = 4;
  rectangle.width = 5;

  float area = rectangle_area(rectangle);
  std::cout << area << std::endl;
  return 0;
}
