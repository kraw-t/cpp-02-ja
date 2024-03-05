#include <iostream>
#include "project.hpp"
#include "team.hpp"
#include "person.hpp"

// `Team` オブジェクトを初期化するコンストラクタ
Project::Project() {
  this->team = Team();
}

// チームにメンバーを追加するメンバ関数
void Project::add_team_member(const Person& person) {
  this->team.add_member(person);
  return;
}

// チームのメンバーを出力するメンバ関数
void Project::print_team_members(void) const {
  std::vector<Person> members = this->team.get_member();
  for (auto& person : members) {
    std::cout << person.get_name() << std::endl;
  }
  return;
}
