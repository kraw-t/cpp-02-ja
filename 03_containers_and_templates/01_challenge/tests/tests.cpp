#include "tests.hpp"

#include <gtest/gtest.h>

#include "print.hpp"

#include <string>
#include <vector>
#include <list>

using namespace testing;

TEST(Test, print) {    
    std::vector<int> vec = {1, 2, 3};
    auto vec_output = captureOutput([&](){ print_elements(vec); });
    ASSERT_TRUE(vec_output.find("1") != std::string::npos &&
                vec_output.find("2") != std::string::npos &&
                vec_output.find("3") != std::string::npos);

    std::list<char> lst = {'a', 'b', 'c'};
    auto lst_output = captureOutput([&](){ print_elements(lst); });
    ASSERT_TRUE(lst_output.find("a") != std::string::npos &&
                lst_output.find("b") != std::string::npos &&
                lst_output.find("c") != std::string::npos);
}
