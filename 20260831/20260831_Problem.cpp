#include <iostream>
#include"Problem.h"
#include <string>
using namespace std;


int main() 
{
    //口座作成
    BankAccount account("Alice", 5000.0);
    //口座情報表示
    account.displayAccountInfo();
    //入金する額
    account.deposit(1000.0);
    account.withdraw(2000.0);
    account.withdraw(5000.0); // 残高不足で失敗
    //最終的な口座情報を表示
    account.displayAccountInfo();

    return 0;
}