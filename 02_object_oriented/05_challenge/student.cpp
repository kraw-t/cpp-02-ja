#include "student.hpp"

#include <string>

Student::Student(const std::string& name) : name(name) {}

void Student::assignTeacher(Teacher* teacher) {
  this->teachers.push_back(teacher);
  return;
}

std::string Student::getName() {
  return this->name;
}

std::vector<Teacher*> Student::getTeachers() {
  return this->teachers;
}
