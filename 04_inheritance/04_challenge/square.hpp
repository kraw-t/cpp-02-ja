// コードを入力してください
// `Drawable` を継承する2つの派生クラス `Circle` (円形) と `Square` (四角形) を作成します。
// 各派生クラスで `draw()` 関数を実装して、それぞれの図形を表すシンプルなテキストを出力します
#pragma once
#include <iostream>
#include "drawable.hpp"

class Square : public Drawable {
 public:
  Square();
  void draw(void) const override;
};
