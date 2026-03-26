#include <iostream>
using namespace std;
// return keyword

double square(double num)
{
    return num * num;
}

string concatString(string  string1, string string2)
{
    return string1 + " " + string2;
}

int main()
{
    double side;
    cout << "Enter side of square: ";
    cin >> side;
    cout << "Area of square: " << square(side)<< " cm2" << endl;

    string firstName;
    string lastName;

    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;

    cout << "Your full name is: " << concatString(firstName, lastName);
    return 0;
}