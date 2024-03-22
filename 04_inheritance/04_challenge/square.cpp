// コードを入力してください
#include <iostream>
#include "drawable.hpp"
#include "square.hpp"

Square::Square() {}

void Square::draw(void) const {
  std::cout << "Square" << std::endl;
}
