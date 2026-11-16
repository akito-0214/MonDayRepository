#include <iostream>
#include <memory>
#include "Enemy.h"
using namespace std;

int main()
{
    // shared_ptrでEnemyを生成
    shared_ptr<Enemy> enemy =
        make_shared<Enemy>("スライム");

    // Enemyの情報を表示
    enemy->ShowInfo();

    // 所有者数を表示
    cout << "所有者数：" << enemy.use_count() << endl;

    return 0;
}