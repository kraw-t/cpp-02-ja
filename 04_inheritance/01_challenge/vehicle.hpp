#pragma once

class Vehicle {
 public:
  Vehicle(float speed, float capacity);
  virtual void disp_spec(void) const;

 protected:
  float max_speed_kph;  // 最高速度 [km/h]
  float fuel_capacity;  // 燃料タンク容量 [L]
};