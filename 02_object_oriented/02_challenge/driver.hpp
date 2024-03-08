// コードを入力してください
#pragma once
#include <string>

class Driver {
 public:
  Driver();
  Driver(std::string name, unsigned int age);

  std::string getName(void);

 private:
  std::string name;
  unsigned int age;
};
