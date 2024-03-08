// コードを入力してください
#include <string>
#include "car.hpp"
#include "driver.hpp"

int main() {
  Car crown("toyota", "crown", 2022, 20'000);
  crown.displayInfo();

  Driver taka = Driver("taka", 50);
  crown.setDriver(&taka);
  crown.displayInfo();

  return 0;
}