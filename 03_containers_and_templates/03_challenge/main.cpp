#include <vector>
#include <list>
#include <deque>
#include "../02_challenge/stack.hpp"

int main() {
  Stack<uint32_t, std::deque<uint32_t>> stack;

  // add data to stack
  for (uint32_t i = 0; i < 100000000; i++) {
    stack.push(i);
  }

  // pickup top data and delete from stack
  uint32_t top_data;
  while (!stack.is_empty()) {
    top_data = stack.top();
    stack.pop();
  }

  return 0;
}