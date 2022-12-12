#include <iostream>
using namespace std;

void showMenu();

class person{
private:
    string name, bank, data, card, cvv2, password;
    double balance;
public:
    person()
    {
        balance = 500;
    }
    void showBalance()
    {
        cout << "Balance is: " << balance << " $" << endl;
    }
    void deposit(double depositAmount)
    {
        balance += depositAmount;
    }
    void withdraw(double withdrawAmount)
    {
        if (withdrawAmount <= balance)
            balance -= withdrawAmount;
        else
            cout << "Not enough money" << endl;
    }

};

int main()
{
    // check balance, deposit, withdraw, show menu
    int option;
    person user;
    do
    {
        system("cls");
        showMenu();
        cout << "Option: ";
        cin >> option;
        switch (option)
        {
        case 1:
            user.showBalance();
            break;

        case 2:
            cout << "Deposit amount: ";
            double depositAmount;
            cin >> depositAmount;
            user.deposit(depositAmount);
            break;

        case 3:
            cout << "Withdraw amount: ";
            double withdrawAmount;
            cin >> withdrawAmount;
            user.withdraw(withdrawAmount);
            break;
        }
        system("pause");
    } while (option != 4);
    return 0;
}

void showMenu()
{
    cout << "*************** MENU ***************" << endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "************************************" << endl;
}
