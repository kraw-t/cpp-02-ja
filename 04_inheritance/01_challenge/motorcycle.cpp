#include <iostream>
#include "vehicle.hpp"
#include "motorcycle.hpp"

Motorcycle::Motorcycle(float speed, float capacity) : Vehicle{speed, capacity} {}

void Motorcycle::disp_spec(void) const {
  std::cout << "Motorcycle, max speed is " << max_speed_kph << "[km/h], fuel tank capacity is " << fuel_capacity << "[L]" << std::endl;
}
