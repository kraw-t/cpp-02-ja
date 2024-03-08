#include "teacher.hpp"

#include <string>

Teacher::Teacher(const std::string& name) : name(name) {}

void Teacher::assignStudent(Student* student) {
  this->students.push_back(student);
  return;
}

std::string Teacher::getName() {
  return this->name;
}

std::vector<Student*> Teacher::getStudents() {
  return this->students;
}
