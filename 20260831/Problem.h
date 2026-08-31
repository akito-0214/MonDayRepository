#pragma once
#include <string>
class BankAccount
{
private:
    std::string accountHolder; // 口座名義人
    double balance;            // 残高

public:
    //口座名義人と残高を指定して口座作成
    BankAccount(const string& holder, double initialBalance)
        : accountHolder(holder), balance(initialBalance) {}
    //今ある口座残高
    double getBalance() const {
        return balance;
    }
    //指定した額を入れる
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << "\n";
        }
        else {
            cout << "Invalid deposit amount.\n";
        }
    }
    //指定した金額を引き出す
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << "\n";
        }
        else
        {
            cout << "Invalid withdraw amount or insufficient funds.\n";
        }
    }
    //口座情報を表示する
    void displayAccountInfo() const
    {
        cout << "Account Holder: " << accountHolder << "\n"
            << "Current Balance: " << balance << "\n";
    }
};
