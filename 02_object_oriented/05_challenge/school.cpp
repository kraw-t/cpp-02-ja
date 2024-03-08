#include "school.hpp"

#include <iostream>
#include <vector>
#include "teacher.hpp"
#include "student.hpp"

School::School() {}
// Student を登録する
void School::enrollStudent(Student* student) {
  this->in_school_students.push_back(student);
  return;
}

// Teacher を雇う
void School::hireTeacher(Teacher* teacher) {
  this->in_school_teachers.push_back(teacher);
  return;
}

// Student を Teacher に割り当てる
void School::assignStudent(Student* student, Teacher* teacher) {
  teacher->assignStudent(student);
  student->assignTeacher(teacher);
  return;
}

// for debug
void School::dispInSchool(void) {
  std::cout << "Students and relation in School:" << std::endl;
  for (int i = 0; i < this->in_school_students.size(); i++) {
    std::cout << " - " << this->in_school_students[i]->getName() << std::endl;
    for (int j = 0; j < this->in_school_students[i]->getTeachers().size(); j++) {
      std::cout << "    - " << this->in_school_students[i]->getTeachers()[j]->getName() << std::endl;
    }
  }
  std::cout << std::endl;

  std::cout << "Teachers and relation in School:" << std::endl;
  for (int i = 0; i < this->in_school_teachers.size(); i++) {
    std::cout << " - " << this->in_school_teachers[i]->getName() << std::endl;
    for (int j = 0; j < this->in_school_teachers[i]->getStudents().size(); j++) {
      std::cout << "    - " << this->in_school_teachers[i]->getStudents()[j]->getName() << std::endl;
    }
  }
  std::cout << std::endl;
}