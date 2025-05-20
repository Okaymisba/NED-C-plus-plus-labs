#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    string accountHolder;
    double balance;

public:
    BankAccount(string accNum, string accHolder, double bal)
    {
        accountNumber = accNum;
        accountHolder = accHolder;
        balance = bal;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited $" << amount << ". New balance: $" << balance << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn $" << amount << ". New balance: $" << balance << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount or insufficient balance." << endl;
        }
    }

    void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main()
{
    BankAccount account("123456789", "John Doe", 1000.0);

    account.display();
    account.deposit(500);
    account.withdraw(300);
    account.withdraw(1500); 

    return 0;
}
