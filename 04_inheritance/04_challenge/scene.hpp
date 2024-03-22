// コードを入力してください
// `Drawable` オブジェクトのポインタを格納できる `Scene` というコンテナクラスを作成します。
// `Scene` クラスにはメンバ関数 `render()` を用意し、この関数ではコンテナに格納されている各オブジェクトの `draw()` 関数を呼び出します
#pragma once
#include <vector>
#include "drawable.hpp"

class Scene {
 public:
  Scene();
  void render(void) const;
  void add(Drawable* p_drawable);

 private:
  std::vector<Drawable*> scenes;
};
