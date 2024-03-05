#include "tests.hpp"

#include <gtest/gtest.h>
#include <string>

#include "car.hpp"
#include "logger.hpp"

TEST(Test, Logger) {    
    Car car("Toyota", "Camry", 2003, 40'000);
    auto captured_output = captureOutput([&](){ car.setPrice(35'999); });
    ASSERT_TRUE(captured_output.size() > 0);

    Logger logger;
    auto captured_output2 = captureOutput([&](){ logger.logMessage(captured_output); });
    ASSERT_TRUE(captured_output2.size() > 0);

    ASSERT_EQ(captured_output, captured_output2.substr(0, captured_output.size()));
}
