#include <iostream>
#include <string>
#include "garage.hpp"
#include "car.hpp"

int main() {
  Car yaris = Car("toyota", "yaris", 2020, 14000);
  Car jazz = Car("honda", "jazz", 2021, 14500);
  Car micra = Car("nissan", "micra", 2022, 15000);

  Garage garage;

  garage.addCar(&yaris);
  garage.dispCarsInGarage();

  garage.addCar(&jazz);
  garage.dispCarsInGarage();

  garage.addCar(&micra);
  garage.dispCarsInGarage();

  // 重複の確認
  garage.addCar(&jazz);
  garage.dispCarsInGarage();

  // 削除の確認
  garage.removeCar(&jazz);
  garage.dispCarsInGarage();

  garage.removeCar(&yaris);
  garage.dispCarsInGarage();

  garage.removeCar(&yaris);
  garage.dispCarsInGarage();

  garage.removeCar(&micra);
  garage.dispCarsInGarage();

  return 0;
}