// コードを入力してください
#pragma once

// `Animal` という名前の基底クラス
class Animal {
 public:
  Animal();
  
  //"Unknown sound"と出力するpublicメンバ関数 `makeSound()` 
  virtual void makeSound(void) const;
};
