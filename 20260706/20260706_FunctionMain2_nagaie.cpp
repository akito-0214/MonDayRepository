#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260706_HeaderMain2_nagaie.h"
using namespace std;

void EXP(int& num)
{
	num = rand() % 15 +1;
	cout << "経験値を" << num << "獲得できました" << endl;
}

//入力チェック
int InputCheck(int min, int max)
{
	int num;
	while (true)
	{
		if (min > num || max < num)
		{
			cout << "入力に誤りがあります\n";
		}
		else
		{
			break;
		}
	}
	return num;
}

void Game()
{
	int player;
	int cpu;
	int exp = 0;
	int level = 1;
	int win = 0;
	int give;

	//乱数の初期化
	srand((unsigned int)time(NULL));
	cpu = rand() % 3;
	//じゃんけん
	while (true)
	{
		EXP::LEVEL;
		cout << "出す手を選択してください(0:ぐー, 1:ちょき, 2:ぱー)" << endl;
		cin >> player;
		if (player == cpu)
		{
			cout << "あいこです" << endl;
		}
		else if (player == 0 && cpu == 1 || player == 1 && cpu == 2 || player == 2 && cpu == 0)
		{
			cout << "君の勝ちだ‼" << endl;
			EXP(exp);
			cout << "経験値が" << exp << "増えました" << endl;

			exp += give;
		}
		else
		{
			cout << "負けました" << endl;
		}

		if (EXP::LEVEL_UP)
		{
			exp -= EXP::LEVEL_UP;
			level++;
			if (level <= 5)
			{
				cout << "レベルアップ！\n"
					<< "レベル" << level << "になりました\n";
			}

			if (level == 5)
			{
				break;
			}
		}
	}
}

