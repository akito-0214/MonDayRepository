#include <iostream>
#include "Enemy.h"
using namespace std;
// HP‚ðŽæ“¾‚·‚é
int Enemy::GetHp() const
{
    return hp;
}

// HP‚ð•\Ž¦‚·‚é
void Enemy::Draw() const
{
     cout << "Enemy HP : " << hp << endl;
}

// Enemy‚ðŽQÆ“n‚µ‚ÅŽó‚¯Žæ‚é
void ShowEnemy(const Enemy& enemy)
{
    
    cout << "ShowEnemy()" << endl;

    // HP‚ð•\Ž¦
    enemy.Draw();

    cout << "GetHp() : " << enemy.GetHp() << endl;
}