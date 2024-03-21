// コードを入力してください
#include <iostream>
#include "animal.hpp"

Animal::Animal() {}

//"Unknown sound"と出力するpublicメンバ関数 `makeSound()` 
void Animal::makeSound(void) const {
  std::cout << "Unknown sound." << std::endl;
}
