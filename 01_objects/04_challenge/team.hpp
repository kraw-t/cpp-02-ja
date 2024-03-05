#pragma once
#include <vector>
#include "person.hpp"

class Team {
 public:
  Team();
  void add_member(const Person& person);  // チームにメンバーを追加するメンバ関数
  std::vector<Person> get_member(void) const;  // チームメンバーを取得するメンバ関数

 private:
  std::vector<Person> member;  // チームメンバーを表すメンバ変数
};
