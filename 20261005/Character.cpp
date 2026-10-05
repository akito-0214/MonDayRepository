#include "Character.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

// コンストラクタ
Character::Character()
{
    hp = MAX_HP;
    

    attack = randomInt(1, 20);
    defense = randomInt(1, 20);
    evasion = randomInt(1, 20);
}

// 攻撃
void Character::attackCharacter(Character& target)
{
    // 1～12のランダム値
    int randomValue = randomInt(1, 12);

    cout << "攻撃時のランダム値: "
        << randomValue << endl;

    // 回避判定
    if (randomValue > target.evasion)
    {
        int damage = attack + randomValue - target.defense;

        // ダメージが0未満にならないようにする
        damage = max(0, damage);

        target.hp -= damage;

        cout << "攻撃成功！" << endl;
        cout << "ダメージ: "
            << damage << endl;
    }
    else
    {
        cout << "攻撃失敗！" << endl;
        cout << "ダメージ: 0" << endl;
    }
}

// 回復
void Character::heal()
{
    // 1～12のランダム値
    int healAmount = randomInt(1, 12);

    int oldHp = hp;

    hp += healAmount;

    // HPが100を超えないようにする
    hp = min(hp, MAX_HP);

    cout << "回復量: "
        << hp - oldHp << endl;
}

// HPが0以下か
bool Character::isDead()
{
    return hp <= 0;
}

// 能力値表示
void Character::showStatus()
{
    cout << "HP: " << hp << endl;
    cout << "攻撃力: " << attack << endl;
    cout << "防御力: " << defense << endl;
    cout << "回避力: " << evasion << endl;
}

// HP取得
int Character::getHp()
{
    return hp;
}