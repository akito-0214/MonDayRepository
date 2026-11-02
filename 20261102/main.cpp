#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int PLAYER_HP = 100;
int ENEMY_HP = 100;
const int DMG = 30;
const int HEEL = 20;

namespace player
{
	int player_action()
	{
		int choice;
		cout << "1:攻撃\n";
		cout << "2:防御\n	";
		cout << "3:回復\n";
		cout << "行動を選択してください\n";
		cin >> choice;


		return choice;
	}
}

namespace enemy
{


	void enemy_action(int choice_enemy)
	{
		choice_enemy = rand() % 3 + 1;

		if (choice_enemy ==1)
		{
			cout << "敵はダメージを受けない!\n";
		}

		if (choice_enemy ==2)
		{
			cout << "プレイヤーに20ダメージを与える（防御中は10ダメージ）\n";
			PLAYER_HP -= 10;
		}

		if (choice_enemy ==3)
		{
			cout << "プレイヤーに20ダメージを与える\n";
			PLAYER_HP -= 20;
		}

	}

}

int main(void)
{
	//乱数初期化
	srand((unsigned int)time(NULL));

	int choice;
	while (PLAYER_HP>0&&ENEMY_HP>0)
	{

	}


}


