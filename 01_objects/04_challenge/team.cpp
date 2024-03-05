#include <vector>
#include "team.hpp"
#include "person.hpp"

// コンストラクタ
Team::Team() {}

// チームにメンバーを追加するメンバ関数
void Team::add_member(const Person& person) {
  this->member.push_back(person);
  return;
}

std::vector<Person> Team::get_member() const {
  return this->member;
}
