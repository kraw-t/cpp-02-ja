#include "project.hpp"
#include "person.hpp"

int main() {
  Person pochi = Person("pochi");
  Person tama = Person("tama");
  Person mike = Person("mike");

  Project prj = Project();
  prj.add_team_member(pochi);
  prj.add_team_member(tama);
  prj.add_team_member(mike);
  prj.print_team_members();

  return 0;
}