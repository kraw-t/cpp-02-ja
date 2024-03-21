// コードを入力してください
#pragma once
#include "animal.hpp"

// `Animal` を継承した派生クラス `Dog` 
class Dog : public Animal {
 public:
  Dog();

  // `makeSound()` 関数をオーバーライドして"Woof!"と出力
  void makeSound(void) const override;
};

