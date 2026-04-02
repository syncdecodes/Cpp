#include <iostream>
using namespace std;
// Temp degree converter

int main()
{
    double temp;
    char unit;
    cout << "************  Temprature conversion  ************" << endl;
    cout << "F: Farhenhiet" << endl;
    cout << "C: Celcius" << endl;
    cout << "What unit would you like to convert to: ";
    cin >> unit;

    if (unit == 'C' || unit == 'c')
    {
        cout << "Enter degree celcius: ";
        cin >> temp;
        temp = (temp * 1.8) + 32;
        cout << "Degree farhenhiet: " << temp << endl;
    }
    else if (unit == 'F' || unit == 'f')
    {
        cout << "Enter degree farhenhiet: ";
        cin >> temp;
        temp = (temp - 32) * 5 / 9;
        cout << "Degree celcius: " << temp << endl;
    }
    else{
        cout << "Please enter in only C or F" << endl;
    }

    return 0;
}