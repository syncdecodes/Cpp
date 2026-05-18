#include <iostream>
#include <iomanip> // I/O Manipulators used to format how data appears in the output stream
using namespace std;

int main()
{
    // setw(n) sets the minimum field width for the next output operation only
    // If the data is shorter than n, it is padded with spaces (usually on the left by default). If the data is longer than n, the width is ignored to ensure no data is lost.

    // setprecision(n) controls the number of digits displayed for floating-point numbers (floats and doubles)
    double pi = 3.1415;
    cout << setw(10) << pi << endl; // Output:     3.1415(4 spaces before + 6 digits of (3.1415 including decimal point))

    cout << setprecision(3) << pi << endl; // Output: 3.14 (3 significant digits)
    cout << fixed << setprecision(3) << pi << endl; // Output: 3.142 (fixed: sets the exact number of digits after the decimal point. (Rounds off)) 
    return 0;
}
