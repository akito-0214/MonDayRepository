#include<iostream>
#include"enemy.h"
using namespace std;

int main()
{
    // unique_ptrでEnemyを生成
    unique_ptr<Enemy> enemy = make_unique<Enemy>();

    // EnemyのHPを表示
    cout << "Main()" << endl;
    enemy->Draw();

    // ShowEnemyにEnemyを渡す
    ShowEnemy(*enemy);

    // 関数呼び出し後もEnemyが存在するか確認
    std::cout << "ShowEnemy()呼び出し後" << std::endl;

    if (enemy)
    {
        std::cout << "Enemyは存在しています。" << std::endl;
        enemy->Draw();
    }

    return 0;