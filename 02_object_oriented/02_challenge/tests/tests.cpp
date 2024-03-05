#include "tests.hpp"

#include <gtest/gtest.h>
#include <string>

#include "car.hpp"
#include "driver.hpp"

TEST(Test, Driver) {    
    Car car("Toyota", "Camry", 2003, 40'000);
    ASSERT_EQ(car.getDriver(), nullptr);

    Driver driver("Name", 100);
    car.setDriver(&driver);
    ASSERT_EQ(car.getDriver(), &driver);
}
