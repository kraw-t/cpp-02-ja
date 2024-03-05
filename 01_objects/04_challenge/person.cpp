#include <string>
#include "person.hpp"

// nameを引数として受け取るコンストラクタ
Person::Person(std::string name) : name(name) {}

// nameを出力するメンバ関数
std::string Person::get_name() {
  return this->name;
}
