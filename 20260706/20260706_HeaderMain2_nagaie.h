#pragma once
//
namespace EXP
{
	const int EXP_MIN = 1;
	const int EXP_MAX = 15;
	const int LEVEL = 5;
	const int LEVEL_UP = 20;
}
//関数プロトタイプ宣言
int InputCheck(int min, int max);
void EXP(int& num);