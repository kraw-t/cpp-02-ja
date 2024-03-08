#pragma once
#include <string>

enum class TireType {
  summer,
  snow,
  all_season
};

class Tire {
 public:
  Tire(std::string size, TireType type);

 private:
  std::string size;
  TireType type;
};
