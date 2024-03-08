// コードを入力してください
#include "logger.hpp"

#include <iostream>
#include <string>

// constructor
Logger::Logger() {};

// 受けとったメッセージを標準出力に出力する関数
void Logger::logMessage(const std::string& msg) const {
  std::cout << msg << std::endl;
}
