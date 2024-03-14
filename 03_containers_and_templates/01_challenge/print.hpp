// コードを入力してください
#include <iostream>

template<typename T>
void print_elements(T container) {
  for (const auto& data : container) {
    std::cout << data << " ";
  }
  std::cout << std::endl;
}
