#pragma once
#include <vector>
#include "teacher.hpp"
#include "student.hpp"

class School {
 public:
  School();
  void enrollStudent(Student* student);              // Student を登録する
  void hireTeacher(Teacher* teacher);                // Teacher を雇う
  void assignStudent(Student* student, Teacher* teacher);  // Student を Teacher に割り当てる

  // for debug
  void dispInSchool(void);

 private:
  std::vector<Teacher*> in_school_teachers;
  std::vector<Student*> in_school_students;
};
