#include "garage.hpp"

#include <iostream>
#include <vector>
#include "car.hpp"

void Garage::addCar(Car* p_car) {
  if (p_car != nullptr) {
    for (int i = 0; i < this->cars.size(); i++) {
      if (this->cars[i] == p_car) {
        // 重複しているので追加しない
        return;
      }
    }
    this->cars.push_back(p_car);
  }
  return;
}

void Garage::removeCar(Car* p_car) {
  if (p_car != nullptr) {
    for (int i = 0; i < this->cars.size(); i++) {
      if (this->cars[i] == p_car) {
        this->cars.erase(this->cars.begin() + i);
        break;  // 同じ車を重複させないようにaddしているので、一つ見つけたらbreakしていい
      }
    }
  }
  return;
}

int Garage::getNumCars(void) const {
  return this->cars.size();
}

// for debug
void Garage::dispCarsInGarage(void) const {
  std::cout << "num of cars: " << getNumCars() << "\n  | ";
  for (int i = 0; i < this->cars.size(); i++) {
    std::cout << this->cars[i]->getModel() << " | ";
  }
  std::cout << std::endl;
  return;
}

