#include <iostream>
using namespace std;
// pass by value vs pass by reference

void swap(std::string &var1, std::string &var2);
void address(int num1, int num2);

int main()
{
    std::string var1 = "Admin";
    std::string var2 = "Dev";

    int num1 = 1;
    int num2 = 2;

    
    std::cout << "**** PASS BY REFERENCE ****\n";
    std::cout << "***********************\n";
    std::cout << endl;
    
    std::cout << "original address of var1: " << &var1 << endl;
    std::cout << "original address of var2: " << &var2 << endl;
    std::cout << endl;
    
    swap(var1, var2);
    std::cout << endl;

    std::cout << "swapped values -:\n";
    std::cout << "var1: " << var1 << endl;
    std::cout << "var2: " << var2 << endl;

    std::cout << endl;

    std::cout << "**** PASS BY VALUE ****\n";
    std::cout << "***********************\n";
    std::cout << endl;

    std::cout << "original address of num1: " << &num1 << endl;
    std::cout << "original address of num2: " << &num2 << endl;

    std::cout << endl;

    address(num1, num2);

    return 0;
}

void swap(std::string &var1, std::string &var2)
{
    std::string temp;

    temp = var1;
    var1 = var2;
    var2 = temp;

    std::cout << "copied address of num1: " << &var1 << endl;
    std::cout << "copied address of num2: " << &var2 << endl;
}

void address(int num1, int num2)
{
    std::cout << "copied address of num1: " << &num1 << endl;
    std::cout << "copied address of num2: " << &num2 << endl;
}

/*
When we pass a varaible to a function we pass with value
and when we invoke the function we create copies of the original values
hence to work with the original values we have to pass by referene
reference - a memory address (&)

best practice - pass by reference until and unless we have a proper reason

| Feature            | Call by Value                                          | Call by Reference                                    |
| ------------------ | ------------------------------------------------------ | ---------------------------------------------------- |
| **Data Passed**    | A copy of the variable's value.                        | The memory address (reference) of the variable.      |
| **Original Value** | Remains unchanged by function modifications.           | Can be modified directly by the function.            |
| **Memory**         | Uses separate memory for actual and formal parameters. | Shares the same memory location for both parameters. |
| **Performance**    | Slower for large data (due to copying overhead).       | Efficient for large objects as it avoids copying.    |
| **Syntax**         | `void func(int x)`                                     | `void func(int &x)`                                  |

*/

