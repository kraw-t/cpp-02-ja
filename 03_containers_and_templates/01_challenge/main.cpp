#include <vector>
#include <list>
#include <deque>
#include <string>
#include "print.hpp"

int main() {
  std::vector<int> vec_int {1, 1, 2, 3, 5, 8, 13, 21};
  std::list<float> list_float {3.14159, 2.71828, 1.41421};
  std::deque<std::string> deque_string {"alpha", "beta", "gamma", "delta", "epsilon"};

  // print
  print_elements(vec_int);
  print_elements(list_float);
  print_elements(deque_string);

  return 0;
}