// コードを入力してください
#include <iostream>
#include <string>
#include "bank_account.h"

// 最初の口座残高を引数として受け取るコンストラクタ
BankAccount::BankAccount(double initial_balance) : balance(initial_balance) {}

// `double` 型の値を引数として受け取るメンバ関数 `deposit`。引数で指定した金額を口座に入金し、入金後の残高を出力する
void BankAccount::deposit(double amount) {
  if (amount < 0) {
    std::cout << "Invalid amount!" << std::endl;
  } else {
    this->balance += amount;
    std::cout << this->balance << std::endl;
  }
  return;
}

// `double` 型の値を引数として受け取るメンバ関数 `withdraw`。引数で指定した金額を口座から出金し、出金後の残高を出力する。
// 残高が不足している場合は、"Insufficient balance!"と出力して出金しない
void BankAccount::withdraw(double amount) {
  if (this->balance < amount) {
    std::cout << "Insufficient balance!" << std::endl;
  } else if (amount < 0) {
    std::cout << "Invalid amount!" << std::endl;
  } else {
    this->balance -= amount;
    std::cout << this->balance << std::endl;
  }
  return;
}

// 現在の残高を返すメンバ関数 `get_balance`
double BankAccount::get_balance(void) {
  return this->balance;
}
