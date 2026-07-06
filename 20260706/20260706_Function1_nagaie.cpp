#include<iostream>
#include"20260706_Header1_nagaie.h"
using namespace std;





void Heal(int &HP)
{
	HP += 20;
	cout << "20‰ñ•œ‚µ‚Ü‚µ‚½\n";
}
//
int InputCheck(int min, int max)
{
	int num;
	while (true)
	{
		cin >> num;
		if (min > num || max < num)
		{
			cout << "“ü—Í‚ÉŒë‚è‚ª‚ ‚è‚Ü‚·\n";
		}
		else
		{
			break;
		}
	}
	return num;
}

void HealCheck()
{
	int player = PLAYER_HP;
	int select;

	cout << "HP‚ð‰ñ•œ‚³‚¹‚Ü‚·‚©i‚P‚ªYES‚Å‰ñ•œA‚Q‚ª‚»‚Ì‚Ü‚Ü‚Å‚·j\n";

	cout << "‘I‘ð‚µ‚Ä‚­‚¾‚³‚¢\n";
	select = InputCheck(MAX, MIN);

	if (player == 1)
	{
		Heal(player);
		cout << "‰ñ•œ‚µ‚Ü‚µ‚½\n";
	}

	else if (player == 2)
	{
		cout << "‚»‚Ì‚Ü‚Ü‚ÌHP‚Å‚·\n";
	}

	cout << "Œ»Ý‚ÌHP‚Í" << player <<"‚Å‚·"<< endl;
}