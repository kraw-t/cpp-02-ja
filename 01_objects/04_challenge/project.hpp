#pragma once
#include "team.hpp"
#include "person.hpp"

class Project {
 public:
  Project();
  void add_team_member(const Person& person); // チームにメンバーを追加するメンバ関数
  void print_team_members(void) const;  // チームのメンバーを出力するメンバ関数

 private:
  Team team;  // プロジェクトチームを表すprivateメンバ変数
};
