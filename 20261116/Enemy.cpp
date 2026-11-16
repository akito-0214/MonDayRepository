#include "Enemy.h"
#include<iostream>

Enemy::Enemy(string name)
{
    this->name = name;
}

void Enemy::ShowInfo()
{
    cout << "Enemy‚Ì–¼‘OF" << name << endl;
}