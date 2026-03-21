#include <iostream>
using namespace std;
// logical operators

/*
&& = check if two condition are true
|| = if at least one is true
! = reverse the logical state of its operand
*/

int main()
{

    double temp;
    bool sunny = true;

    cout << "Enter the temprature in degree celcius: ";
    cin >> temp;

    // if (temp > 0 && temp < 30){
    //     cout << "Good temp";
    // }
    // else{
    //     cout << "Bad temp";
    // }

    if (temp <= 0 || temp >= 30){
        cout << "Bad temp" << endl;
    }
    else{
        cout << "Good temp" << endl;
    }

    cout << (!sunny); // 0

    return 0;
}