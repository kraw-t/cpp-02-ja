#pragma once

#include "vehicle.hpp"

class Motorcycle : public Vehicle {
 public:
  Motorcycle(float speed, float capacity);
  void disp_spec(void) const override;
};
