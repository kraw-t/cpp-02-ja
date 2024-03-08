// コードを入力してください
#include "driver.hpp"

#include <string>

Driver::Driver() : name(), age() {}
Driver::Driver(std::string name, unsigned int age) : name(name), age(age) {}

std::string Driver::getName() {
  return this->name;
}