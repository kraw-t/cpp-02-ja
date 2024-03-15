// 名前と電話番号を保持するクラス
#include <iostream>
#include <map>
#include <string>

enum class AddressBookReturn {
  success,
  failed_duplicate,
  failed_invalid_value,
  failed_not_found
};

class AddressBook {
 public:
  // 名前と電話番号をmapに追加する
  AddressBookReturn add(std::string name, std::string tel_number);

  // 名前とそれに紐づく電話番号をmapから削除する
  AddressBookReturn remove(std::string name);

  // 特定の名前で電話番号を検索する
  std::string look_for(std::string name);

  // すべての名前と電話番号をアルファベット順に表示する
  void disp_all_address(void);

 private:
  std::map<std::string, std::string> address_map;
};
