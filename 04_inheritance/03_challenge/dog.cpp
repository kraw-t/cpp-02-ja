// コードを入力してください
#include <iostream>
#include "dog.hpp"

Dog::Dog() {}

// `makeSound()` 関数をオーバーライドして"Woof!"と出力
void Dog::makeSound(void) const {
  std::cout << "Woof!" << std::endl;
}
