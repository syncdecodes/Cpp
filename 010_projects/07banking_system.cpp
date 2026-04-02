#include <iostream>
using namespace std;
// banking system

/*
Deposit money
Withdraw money
And show balance
*/

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int sno;

    do
    {
        cout << "********** Banking system **********\n";
        cout << "1. Deposit money\n";
        cout << "2. Withdraw money\n";
        cout << "3. Check balance\n";
        cout << "4. Exit\n";

        cout << "Select Action: ";
        cin >> sno;

        std::cin.clear();
        fflush(stdin);

        switch (sno)
        {
        case 1:
            balance += deposit();
            showBalance(balance);
            break;
        case 2:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 3:
            showBalance(balance);
            break;
        case 4:
            std::cout << "Thanks for visiting!\n";
            break;
        default:
            std::cout << "Invalid choice\n";
        }
    } while (sno != 4);

    return 0;
}

void showBalance(double balance)
{
    std::cout << "Your bank balance: $" << balance << endl;
}
double deposit()
{
    double amount = 0;
    cout << "Enter amout to deposit: ";
    cin >> amount;
    if (amount > 0){
        return amount;
    }
    else{
        cout << "Enter valid amount:\n";
        return 0;
    }
}
double withdraw(double balance)
{
    double amount = 0;
    cout << "Enter amount to withdraw";
    cin >> amount;
    if (amount <= balance){
        return amount;
    }
    else if (amount < 0){
        cout << "That's not a valid amount";
    }
    else{
        cout << "Not enough bank balance:\n";
        return 0;
    }
}