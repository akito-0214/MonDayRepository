
#pragma once

class Enemy
{
private:
    int hp = 100;

public:
    int GetHp() const;
    void Draw() const;
    void ShowEnemy(const Enemy& enemy)
};
