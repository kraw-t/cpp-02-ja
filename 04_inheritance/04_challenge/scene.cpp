// コードを入力してください
#include "drawable.hpp"
#include "scene.hpp"

Scene::Scene() {}

void Scene::render(void) const {
  for (const auto& p_elm : this->scenes) {
    if (p_elm == nullptr) {
      continue;
    }
    p_elm->draw();
  }
  return;
}

void Scene::add(Drawable* p_drawable) {
  this->scenes.push_back(p_drawable);
  return;
}
