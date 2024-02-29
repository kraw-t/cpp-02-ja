// コードを入力してください
#include <iostream>
#include <string>
#include "traffic_light.h"

std::string get_action(TrafficLight light) {
  std::string ret_action;  // return value

  switch (light) {
    case TrafficLight::red:
      ret_action = "Stop";
      break;
      
    case TrafficLight::yellow:
      ret_action = "Caution";
      break;
      
    case TrafficLight::green:
      ret_action = "Go";
      break;
      
    default:
      ret_action = "Other";
      break;
  }
  return ret_action;
}
