// コードを入力してください
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <string>
#include "stack.hpp"

int main() {
  std::vector<int> test_int {1, 1, 2, 3, 5, 8, 13, 21};
  std::vector<float> test_float {3.14159, 2.71828, 1.41421};
  std::vector<std::string> test_string {"alpha", "beta", "gamma", "delta", "epsilon"};

  // int型 ✕ list型コンテナのテスト   -------------------------------------------
  Stack<int, std::list<int>> stack_int_list;
  // 値を詰めていく
  std::cout << "is_empty: " << stack_int_list.is_empty() << std::endl;
  for (const auto& data : test_int) {
    std::cout << "push: " << data << std::endl;
    stack_int_list.push(data);
  }
  std::cout << "is_empty: " << stack_int_list.is_empty() << std::endl;

  // 値を取りだして表示
  int top_i;
  while (!stack_int_list.is_empty()) {
    top_i = stack_int_list.top();
    std::cout << "top: " << top_i << std::endl;
    stack_int_list.pop();
  }


  // float型 ✕ deque型コンテナのテスト   -------------------------------------------
  Stack<float, std::deque<float>> stack_float_deque;
  // 値を詰めていく
  std::cout << "is_empty: " << stack_float_deque.is_empty() << std::endl;
  for (const auto& data : test_float) {
    std::cout << "push: " << data << std::endl;
    stack_float_deque.push(data);
  }
  std::cout << "is_empty: " << stack_float_deque.is_empty() << std::endl;

  // 値を取りだして表示
  float top_f;
  while (!stack_float_deque.is_empty()) {
    top_f = stack_float_deque.top();
    std::cout << "top: " << top_f << std::endl;
    stack_float_deque.pop();
  }


  // string型 ✕ vector型コンテナのテスト   -------------------------------------------
  Stack<std::string, std::vector<std::string>> stack_string_vec;
  // 値を詰めていく
  std::cout << "is_empty: " << stack_string_vec.is_empty() << std::endl;
  for (const auto& data : test_string) {
    std::cout << "push: " << data << std::endl;
    stack_string_vec.push(data);
  }
  std::cout << "is_empty: " << stack_string_vec.is_empty() << std::endl;

  // 値を取りだして表示
  std::string top_s;
  while (!stack_string_vec.is_empty()) {
    top_s = stack_string_vec.top();
    std::cout << "top: " << top_s << std::endl;
    stack_string_vec.pop();
  }

  return 0;
}