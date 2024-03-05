#pragma once
#include <string>

class Person {
 public:
  Person(std::string name);  // nameを引数として受け取るコンストラクタ
  std::string get_name(void);  // nameを出力するメンバ関数

 private:
  std::string name;
};
