#include "tests.hpp"

#include <gtest/gtest.h>

#include "stack.hpp"

TEST(Test, Stack) {    
    Stack<int> int_vector_stack;
    ASSERT_EQ(int_vector_stack.is_empty(), true);

    int_vector_stack.push(1);
    ASSERT_EQ(int_vector_stack.is_empty(), false);
    ASSERT_EQ(int_vector_stack.top(), 1);

    int_vector_stack.push(2);
    ASSERT_EQ(int_vector_stack.top(), 2);

    int_vector_stack.pop();
    ASSERT_EQ(int_vector_stack.top(), 1);

    int_vector_stack.pop();
    ASSERT_EQ(int_vector_stack.is_empty(), true);
}

TEST(Test, ErrorHandling) {
    Stack<int> int_vector_stack;
    try {
        int_vector_stack.pop();
        ASSERT_EQ(int_vector_stack.is_empty(), true);
    } catch (std::exception& e) {
        ASSERT_EQ(int_vector_stack.is_empty(), true);
    }
}
