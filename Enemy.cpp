#include "Enemy.h"

void Enemy::Update(){

    // 関数テーブルから関数を実行
    (this->*spFuncTable [index])();

    cout << "次の状態に移行 (0: はい、 他: いいえ)";

    int input;
    cin >> input;

    if (input == 0) {

        index = (index + 1) % 3;

    }
}

void Enemy::Approaching(){

	cout << "敵が接近！" << endl;

}

void Enemy::Attack(){

	cout << "敵が攻撃！" << endl;
}

void Enemy::Pullout(){

	cout << "敵が離脱" << endl;

}

// メンバ関数ポインタテーブル
void (Enemy::* Enemy::spFuncTable[])() = {
    &Enemy::Approaching, // インデックス0
    &Enemy::Attack,   // インデックス1
    &Enemy::Pullout   // インデックス2
};

