#include<iostream>
using namespace std;

int main(void)
{
	int numbers[5] = { 35,82,17,96,54 };
	int maxnumbers;
	int *pNum;
	//配列の先頭アドレス
	pNum = numbers;
	maxnumbers = numbers[0];
	for (int i = 0; i < 5; i++)
	{
		cout << *(pNum + i) << endl;
	}
		for (int i = 0; i < 5; i++)
		{
			if (maxnumbers<*(pNum+i))
			{
				maxnumbers = *(pNum + i);
			}
			
		}
		
	
	cout << "最大値:" << maxnumbers << endl;
	return 0;
}