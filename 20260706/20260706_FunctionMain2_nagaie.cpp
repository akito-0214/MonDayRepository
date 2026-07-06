#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260706_HeaderMain2_nagaie.h"
using namespace std;

void EXP(int& num)
{
	num = rand() % 15;
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
	int exp;

	//乱数の初期化
	srand((unsigned int)time(NULL));
	cpu = rand() % 3;

}