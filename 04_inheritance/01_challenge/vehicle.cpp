#include <iostream>
#include "vehicle.hpp"

Vehicle::Vehicle(float speed, float capacity) : max_speed_kph{speed}, fuel_capacity{capacity} {}

void Vehicle::disp_spec(void) const {
  std::cout << "Vehicle, max speed is " << max_speed_kph << "[km/h], fuel tank capacity is " << fuel_capacity << "[L]" << std::endl;
}
