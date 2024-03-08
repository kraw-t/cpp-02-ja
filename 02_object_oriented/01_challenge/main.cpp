// コードを入力してください
#include "car.hpp"

int main() {
  Car crown("toyota", "crown", 2024, 30000.0);
  crown.displayInfo();

  // discount
  crown.setPrice(29900.0);
  crown.displayInfo();

  return 0;
}