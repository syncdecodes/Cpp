#include <iostream>
using namespace std;
// functions

/*
    a block of reusable code
    note -:
    void fn can't return a value
*/

int sum(int num1, int num2){
    cout << num1 + num2 << endl;
}

void greet(){
    cout << "Hello there! Good morning" << endl;
}

int multiply(int num1, int num2);

int main()
{
    sum(5, 5);
    greet();
    multiply(5, 5);
    return 0;
}

int multiply(int num1, int num2){
    cout << num1 * num2 << endl;
}
