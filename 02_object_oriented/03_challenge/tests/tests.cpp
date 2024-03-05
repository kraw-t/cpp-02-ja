#include "tests.hpp"

#include <gtest/gtest.h>
#include <string>

#include "car.hpp"
#include "garage.hpp"

TEST(Test, Driver) {    
    Garage garage;
    ASSERT_EQ(garage.getNumCars(), 0);

    Car car("Toyota", "Camry", 2003, 40'000);
    garage.addCar(&car);
    ASSERT_EQ(garage.getNumCars(), 1);

    try {
        garage.removeCar(nullptr);
        ASSERT_EQ(garage.getNumCars(), 1);
    } catch (std::exception& e) {
        ASSERT_EQ(garage.getNumCars(), 1);
    }

    garage.removeCar(&car);
    ASSERT_EQ(garage.getNumCars(), 0);
}
