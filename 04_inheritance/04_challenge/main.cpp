// コードを入力してください
#include "circle.hpp"
#include "square.hpp"
#include "scene.hpp"

int main(void) {
  Circle c1 = Circle();
  Circle c2 = Circle();
  Circle c3 = Circle();
  Square s1 = Square();
  Square s2 = Square();
  Square s3 = Square();

  Scene scene = Scene();
  scene.add(&c1);
  scene.add(&c2);
  scene.add(&s1);
  scene.add(&c3);
  scene.add(&s2);
  scene.add(&s3);
  scene.render();
  
  return 0;
}
