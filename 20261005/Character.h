class Character
{
protected:
    static constexpr int MAX_HP = 100;

    int hp;
    int attack;
    int defense;
    int evasion;

public:
    Character();

    void attackCharacter(Character& target);
    void heal();

    const bool isDead();
    const void showStatus();
    const int getHp();
};