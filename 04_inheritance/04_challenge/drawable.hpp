// コードを入力してください
// 純粋仮想関数 `draw()` を持つ `Drawable` という抽象基底クラス
#pragma once

class Drawable {
 public:
  Drawable();
  virtual void draw(void) const = 0;
};
