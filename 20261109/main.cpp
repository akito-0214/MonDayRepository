#include<iostream>
#include"enemy.h"

void Game()
{
    // Enemyをunique_ptrで1体生成
    std::unique_ptr<Enemy> enemy = std::make_unique<Enemy>();

    // Updateを実行
    enemy->Update();

    // Drawを実行
    enemy->Draw();

    // 関数終了時に自動的にEnemyが破棄される
}

int main(void)
{
    Game();

    return 0;
}