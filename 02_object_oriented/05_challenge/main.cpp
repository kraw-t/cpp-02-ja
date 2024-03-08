// `School` オブジェクトを作成して `Teacher`を雇い、何人かの `Student` を登録した後、
// これらの `Student` を `Teacher` に割り当ててこのコードの動作を確認します。
#include <string>
#include "school.hpp"
#include "teacher.hpp"
#include "student.hpp"

int main() {
  // define student
  Student tanaka = Student("Tanaka");
  Student suzuki = Student("Suzuki");
  Student sato = Student("Sato");

  // define teacher
  Teacher ota = Teacher("Ota");
  Teacher nakatsuru = Teacher("Nakatsuru");

  School school = School();
  school.enrollStudent(&tanaka);
  school.enrollStudent(&suzuki);
  school.enrollStudent(&sato);
  school.hireTeacher(&ota);
  school.hireTeacher(&nakatsuru);

  school.assignStudent(&tanaka, &ota);
  school.assignStudent(&suzuki, &ota);
  school.assignStudent(&suzuki, &nakatsuru);
  school.assignStudent(&sato, &nakatsuru);

  school.dispInSchool();

  return 0;
}