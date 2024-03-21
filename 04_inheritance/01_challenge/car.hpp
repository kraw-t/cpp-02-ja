#pragma once

#include "vehicle.hpp"

class Car : public Vehicle {
 public:
  Car(float speed, float capacity);
  void disp_spec(void) const override;
};
