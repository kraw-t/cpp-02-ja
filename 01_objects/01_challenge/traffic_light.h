#pragma once
#include <iostream>
#include <string>

// コードを入力してください
enum class TrafficLight {
  red,
  yellow,
  green
};

std::string get_action(TrafficLight light);
