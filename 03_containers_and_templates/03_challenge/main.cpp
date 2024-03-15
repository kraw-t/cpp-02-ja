#include <vector>
#include <list>
#include <deque>
#include <chrono>
#include <string>
#include "../02_challenge/stack.hpp"

template<typename U>
void push_pop_and_disp_calc_time(U& stack, std::string name) {
  std::chrono::high_resolution_clock::time_point start, end;

  // 時間計測開始
  start = std::chrono::high_resolution_clock::now(); // 計測開始時間

  // add data to stack
  for (uint32_t i = 0; i < 10000000; i++) {
    stack.push(i);
  }

  // pickup top data and delete from stack
  uint32_t top_data;
  while (!stack.is_empty()) {
    top_data = stack.top();
    stack.pop();
  }

  // 計測終了と経過時間の表示
  end = std::chrono::high_resolution_clock::now();  // 計測終了時間
  double elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count(); //処理に要した時間をミリ秒に変換
  std::cout << "elapsed time(" << name << "): " << elapsed << "[ms]" << std::endl;
  
  return;
}

int main() {
  Stack<uint32_t, std::vector<uint32_t>> stack_v;
  push_pop_and_disp_calc_time<Stack<uint32_t, std::vector<uint32_t>>>(stack_v, "vector");

  Stack<uint32_t, std::list<uint32_t>> stack_l;
  push_pop_and_disp_calc_time<Stack<uint32_t, std::list<uint32_t>>>(stack_l, "list");

  Stack<uint32_t, std::deque<uint32_t>> stack_d;
  push_pop_and_disp_calc_time<Stack<uint32_t, std::deque<uint32_t>>>(stack_d, "deque");
  return 0;
}
