#include "tests.hpp"

#include <gtest/gtest.h>

#include "dog.hpp"

TEST(Test, Animal) {    
    Animal base_animal;
    auto captured_output = captureOutput([&](){ base_animal.makeSound(); });
    ASSERT_TRUE(captured_output.find("Unknown sound.") != std::string::npos);
}

TEST(Test, Dog) {    
    std::unique_ptr<Animal> derived_animal = std::make_unique<Dog>();
    auto captured_output = captureOutput([&](){ derived_animal->makeSound(); });
    ASSERT_TRUE(captured_output.find("Woof!") != std::string::npos);
}
