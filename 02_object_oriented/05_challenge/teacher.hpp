#pragma once
#include <vector>
#include <string>
#include "student.hpp"

class Student;

class Teacher {
 public:
  Teacher(const std::string& name);
  void assignStudent(Student* student);
  std::string getName(void);
  std::vector<Student*> getStudents(void);

 private:
  std::string name;
  std::vector<Student*> students;
};
