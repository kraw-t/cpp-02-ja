#include "tests.hpp"

#include <gtest/gtest.h>
#include <memory>

#include "circle.hpp"
#include "square.hpp"
#include "scene.hpp"

TEST(Test, Circle) {    
    std::unique_ptr<Drawable> circle = std::make_unique<Circle>();
    auto captured_output = captureOutput([&](){ circle->draw(); });
    ASSERT_TRUE(!captured_output.empty());
}

TEST(Test, Square) {    
    std::unique_ptr<Drawable> square = std::make_unique<Square>();
    auto captured_output = captureOutput([&](){ square->draw(); });
    ASSERT_TRUE(!captured_output.empty());
}

TEST(Test, CircleAndSquare) {    
    std::unique_ptr<Drawable> circle = std::make_unique<Circle>();
    auto captured_output_circle = captureOutput([&](){ circle->draw(); });

    std::unique_ptr<Drawable> square = std::make_unique<Square>();
    auto captured_output_square = captureOutput([&](){ square->draw(); });

    ASSERT_TRUE(captured_output_circle != captured_output_square);
}

TEST(Test, Scene) {    
    std::unique_ptr<Drawable> circle = std::make_unique<Circle>();
    std::unique_ptr<Drawable> square = std::make_unique<Square>();
    auto captured_output_circle = captureOutput([&](){ circle->draw(); });
    auto captured_output_square = captureOutput([&](){ square->draw(); });

    Scene scene;
    scene.add(circle.get());
    scene.add(square.get());
    auto captured_output_render = captureOutput([&](){ scene.render(); });

    ASSERT_TRUE(captured_output_render.find(captured_output_circle) != std::string::npos);
    ASSERT_TRUE(captured_output_render.find(captured_output_square) != std::string::npos);
}
