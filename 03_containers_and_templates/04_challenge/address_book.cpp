// 名前と電話番号を保持するクラス
#include <iostream>
#include <map>
#include <string>
#include <cctype>
#include <algorithm>
#include "address_book.hpp"

// 名前と電話番号をmapに追加する
// 名前が重複する場合は追加せず AddressBookReturn::failed_duplicate を返す
// 成功したら AddressBookReturn::success を返す
// 電話番号に数字以外が入力された場合は追加せず AddressBookReturn::failed_invalid_value を返す
AddressBookReturn AddressBook::add(std::string name, std::string tel_number) {
  // 電話番号が全てが数字かをチェック
  if (!std::all_of(tel_number.cbegin(), tel_number.cend(), isdigit)) {
    std::cerr << "Add failed. Input telephone number is invalid." << std::endl;
    return AddressBookReturn::failed_invalid_value;
  }

  // try_emplaceで追加
  // キーが重複した場合は追加されず、resultにfalseが返るのでそれによって追加成功したか否かを返す
  auto [iter, result] = address_map.try_emplace(name, tel_number);
  if (result) {
    return AddressBookReturn::success;
  } else {
    std::cerr << "Add failed. Input name is duplicated." << std::endl;
    return AddressBookReturn::failed_duplicate;
  }
}

// 名前とそれに紐づく電話番号をmapから削除する
// 名前が存在しなかった場合は何もせず AddressBookReturn::failed_not_found を返す
// 成功したら AddressBookReturn::success を返す
AddressBookReturn AddressBook::remove(std::string name) {
  // eraseでキーを指定して削除
  // 戻り値が削除した要素数であり、キーが存在しない場合は0が返るので、それによって削除成功したか否かを返す
  std::size_t ret = address_map.erase(name);
  if (ret > 0) {
    return AddressBookReturn::success;
  } else {
    std::cerr << "Remove failed. Input name is not found." << std::endl;
    return AddressBookReturn::failed_not_found;
  }
}

// 特定の名前で電話番号を検索する
// 登録されていない場合は "Not Found." を返す
std::string AddressBook::look_for(std::string name) {
  // findでキーを指定して検索
  auto iter = address_map.find(name);
  if (iter != address_map.end()) {
    return iter->second;
  } else {
    std::cerr << "LookFor failed. Input name is not found." << std::endl;
    return "Not Found.";
  }
}

// すべての名前と電話番号をアルファベット順に表示する
void AddressBook::disp_all_address(void) {
  // mapコンテナはすでにキーの昇順でソートされているので、そのままforで表示すればいい
  for (const auto& [name, tel_number] : address_map) {
    std::cout << name << " : " << tel_number << std::endl;
  }
  return;
}
