#include "motorcycle.hpp"
#include "car.hpp"

int main() {
  Motorcycle motorcycle1 = Motorcycle(300.0, 30.0);
  Car car1 = Car(180.0, 60.0);

  motorcycle1.disp_spec();
  car1.disp_spec();
  
  return 0;
}