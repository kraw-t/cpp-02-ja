#pragma once
#include <vector>
#include <string>
#include "teacher.hpp"

class Teacher;

class Student {
 public:
  Student(const std::string& name);
  void assignTeacher(Teacher* teacher);
  std::string getName(void);
  std::vector<Teacher*> getTeachers(void);

 private:
  std::string name;
  std::vector<Teacher*> teachers;
};
