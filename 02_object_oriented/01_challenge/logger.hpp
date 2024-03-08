// コードを入力してください
#pragma once
#include <string>

class Logger {
 public:
  Logger();

  // 受けとったメッセージを標準出力に出力する関数
  void logMessage(const std::string& msg) const;
};