#include <iostream>
#include "vehicle.hpp"
#include "car.hpp"

Car::Car(float speed, float capacity) : Vehicle{speed, capacity} {}

void Car::disp_spec(void) const {
  std::cout << "Car, max speed is " << max_speed_kph << "[km/h], fuel tank capacity is " << fuel_capacity << "[L]" << std::endl;
}
