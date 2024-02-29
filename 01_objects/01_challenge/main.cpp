// コードを入力してください
#include <iostream>
#include <string>
#include "traffic_light.h"

int main() {
  std::string action = get_action(TrafficLight::green);
  std::cout << action << std::endl;
  return 0;
}
