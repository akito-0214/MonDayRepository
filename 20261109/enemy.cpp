#include<iostream>
#include "enemy.h"

Enemy::Enemy()
{
    std::cout << "Enemyを生成しました。" << std::endl;
}

Enemy::~Enemy()
{
    std::cout << "Enemyを破棄しました。" << std::endl;
}

void Enemy::Update()
{
    std::cout << "EnemyのUpdateを実行しました。" << std::endl;
}

void Enemy::Draw()
{
    std::cout << "EnemyのDrawを実行しました。" << std::endl;
}
