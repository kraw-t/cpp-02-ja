#include "tests.hpp"

#include <gtest/gtest.h>

#include "circle.hpp"

TEST(Test, Circle) {    
    std::unique_ptr<Shape> shape = std::make_unique<Circle>(1.0);
    ASSERT_EQ(shape->getArea(), 3.14159);
}
