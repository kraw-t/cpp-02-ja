#include <iostream>
#include "address_book.hpp"

int main() {
  AddressBook address_book;
  AddressBookReturn ret;

  // add test
  address_book.disp_all_address();
  std::cout << "   -----" << std::endl;
  ret = address_book.add("tanaka","010a101");
  address_book.disp_all_address();
  std::cout << "   -----" << std::endl;
  ret = address_book.add("tanaka","0101601");
  address_book.disp_all_address();
  std::cout << "   -----" << std::endl;
  ret = address_book.add("suzuki","99010101");
  address_book.disp_all_address();
  std::cout << "   -----" << std::endl;
  ret = address_book.add("tanaka","1010101");
  address_book.disp_all_address();
  std::cout << "   -----" << std::endl;
  ret = address_book.add("ueno","99010101");
  address_book.disp_all_address();
  std::cout << "   -----" << std::endl;

  // look_for test
  std::string ret_tel;
  ret_tel = address_book.look_for("tanaka");
  std::cout << ret_tel << std::endl;
  std::cout << "   -----" << std::endl;
  ret_tel = address_book.look_for("ueno");
  std::cout << ret_tel << std::endl;
  std::cout << "   -----" << std::endl;
  ret_tel = address_book.look_for("suzuki");
  std::cout << ret_tel << std::endl;
  std::cout << "   -----" << std::endl;
  ret_tel = address_book.look_for("takahashi");
  std::cout << ret_tel << std::endl;
  std::cout << "   -----" << std::endl;

  // remove test
  ret = address_book.remove("tanaka");
  address_book.disp_all_address();
  std::cout << "   -----" << std::endl;
  ret = address_book.remove("suzuki");
  address_book.disp_all_address();
  std::cout << "   -----" << std::endl;
  ret = address_book.remove("tanaka");
  address_book.disp_all_address();
  std::cout << "   -----" << std::endl;
  ret = address_book.remove("ueno");
  address_book.disp_all_address();
  std::cout << "   -----" << std::endl;

  return 0;
}

