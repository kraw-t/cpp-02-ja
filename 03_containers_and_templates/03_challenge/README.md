# チャレンジ3

スタックの基本データ構造として `std::vector`、`std::list`、`std::deque` を使用した場合のパフォーマンスを比較します。スタックで一連のプッシュ操作とポップ操作を実行する小さなプログラムを作成し、コンテナの種類ごとに実行時間を計ります。このアプリケーションに最適なコンテナを判断し、その理由を説明してください。コンパイラがコードを最適化しないように、必ず-O0を指定してコンパイルしてください。最適化されたベンチマークの値では適切に比較できません。

## 結果

### vectorの場合
`Stack<uint32_t, std::vector<uint32_t>> stack;`

```
ttanaka@MS1-ENV:~/ms1/05_cpp-02-ja/03_containers_and_templates/03_challenge$ g++ -std=c++17 -O0 main.cpp
ttanaka@MS1-ENV:~/ms1/05_cpp-02-ja/03_containers_and_templates/03_challenge$ time ./a.out 

real    0m4.851s
user    0m4.741s
sys     0m0.110s
```

### listの場合
`Stack<uint32_t, std::list<uint32_t>> stack;`

```
ttanaka@MS1-ENV:~/ms1/05_cpp-02-ja/03_containers_and_templates/03_challenge$ g++ -std=c++17 -O0 main.cpp
ttanaka@MS1-ENV:~/ms1/05_cpp-02-ja/03_containers_and_templates/03_challenge$ time ./a.out 

real    0m22.798s
user    0m20.387s
sys     0m2.411s
```

### dequeの場合
`Stack<uint32_t, std::deque<uint32_t>> stack;`

```
ttanaka@MS1-ENV:~/ms1/05_cpp-02-ja/03_containers_and_templates/03_challenge$ g++ -std=c++17 -O0 main.cpp
ttanaka@MS1-ENV:~/ms1/05_cpp-02-ja/03_containers_and_templates/03_challenge$ time ./a.out 

real    0m8.617s
user    0m8.412s
sys     0m0.200s
```

## 最適なコンテナ

先頭／末尾への追加・削除が早い`std::deque`が最も速いと予想したが、`std::vector`が最も速い結果となった。
頻繁な要素の追加・削除ではなく、追加→削除の一方向で行ったため、`std::vector`の連続的なメモリ配置が高速化により寄与したのかもしれない。
