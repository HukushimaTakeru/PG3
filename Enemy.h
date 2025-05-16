#include <iostream>
using namespace std;

class Enemy {
public:
    void Update();

    void Approaching(); // 接近
    void Attack(); // 攻撃
    void Pullout(); // 離脱

    // 関数ポインタテーブル
    static void (Enemy::* spFuncTable[])();

private:
    int index = 0;
};


