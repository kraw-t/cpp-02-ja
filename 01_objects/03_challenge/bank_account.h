// コードを入力してください
#include <iostream>

class BankAccount {
 public:
  // 最初の口座残高を引数として受け取るコンストラクタ
  BankAccount(double initial_balance);

  // `double` 型の値を引数として受け取るメンバ関数 `deposit`。引数で指定した金額を口座に入金し、入金後の残高を出力する
  void deposit(double amount);

  // `double` 型の値を引数として受け取るメンバ関数 `withdraw`。引数で指定した金額を口座から出金し、出金後の残高を出力する。
  // 残高が不足している場合は、"Insufficient balance!"と出力して出金しない
  void withdraw(double amount);
  
  // 現在の残高を返すメンバ関数 `get_balance`
  double get_balance(void);

 private:
  double balance;  //口座残高を格納するためのprivateメンバ変数 `balance` (`double` 型)
};
