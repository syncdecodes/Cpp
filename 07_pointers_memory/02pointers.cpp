#include <iostream>
using namespace std;


// Pointers * -:

int main()
{
    int x = 10;
    int *ptr = &x;

    string name = "Admin";

    cout << "Address of var x: " << &x << endl;
    cout << "Address of var x: " << ptr << endl << endl;
    
    cout << "value var x: " << x << endl;
    cout << "value of var x: " << *ptr << endl << endl;

    *ptr = 100;

    cout << "Updated value of x: " << x << endl;
    cout << "Updated value of x: " << *ptr << endl << endl;

    cout << "Address of Admin: " << &name << endl;
    cout << "Address of A of Admin: " << (void*)&name[0] << endl;
    cout << "Address of d of Admin: " << (void*)&name[1] << endl;
    cout << "Address of m of Admin: " << (void*)&name[2] << endl;
    cout << "Address of i of Admin: " << (void*)&name[3] << endl;
    cout << "Address of n of Admin: " << (void*)&name[4] << endl;

    return 0;
}



/*
References & -:

int main()
{
    int x = 10;
    int &r = x; // Now r is another name for x

    cout << &r;
    return 0;
}
*/


/*
Function Parameters with pointers -:

void change(int *p)
{
    *p = 100;
}

int main()
{
    int x = 10;
    change(&x);
    cout << x; // 100
    return 0;
}
*/


/*
Function Parameters with References -:

void change(int &x)
{
    x = 100;
}

int main()
{
    int x = 5;
    change(x);
    cout << x; // 100
    return 0;
}
*/