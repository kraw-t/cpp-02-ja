// コードを入力してください
#include <iostream>

template<typename T, typename S>
class Stack {
 public:
  // void push(const T& value);
  // void pop(void);
  // T top(void) const;
  // bool is_empty(void) const;

  void push(const T& value) {
    data.push_back(value);
  }

  void pop(void) {
    if (!data.empty()) {
      data.pop_back();
    } else {
      std::cerr << "Stack is empty." << std::endl;
    }
  }

  T top(void) const {
    T ret = data.back();  // backは参照が返される、値だけにする方法が不明
    return ret;
  }

  bool is_empty(void) const {
    return data.empty();
  }

 private:
  S data;
};
