#include <iostream>
#include <cmath>
using namespace std;
// hypotenuse calculator

int main()
{
    double a;
    double b;
    double c;

    cout << "Hypotenuse calculator -: " << "\n"
         << "Enter side a: ";
    cin >> a;
    cout << "Enter side b: ";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));
    cout << "Hypotenuse: " << c;

    return 0;
}