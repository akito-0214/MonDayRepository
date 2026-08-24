#include<iostream>
using namespace std;

int main(void)
{
	//”z—ñ
	int numbers[5] = { 10,20,30,40,50 };
	int *pNumbers;
	//”z—ñ‚Ìæ“ª‚É‚·‚é
	pNumbers = numbers;
	for (int i = 0; i < 5; i++)
	{
		
		cout << "pNumbers:" << *(pNumbers+i) << endl;
	}


	return 0;
}