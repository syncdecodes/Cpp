#include <iostream>
using namespace std;

// Encapsulation: Binding data and functions together into one unit.

class Bank{
    private:
    int balance;

    public:
    void setbal(int b){
        balance = b;
    }
    int getbal(){
        return balance;
    }
};
