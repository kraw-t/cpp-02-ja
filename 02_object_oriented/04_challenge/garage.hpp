#pragma once
#include <vector>
#include "car.hpp"

class Garage {
 public:
  void addCar(Car* p_car);
  void removeCar(Car* p_car);
  int getNumCars(void) const;

  // for debug
  void dispCarsInGarage(void) const;

 private:
  std::vector<Car*> cars;
};
