/*
C++ Variables
Variables are containers for storing data values.

In C++, there are different types of variables (defined with different keywords), for example:

int - stores integers (whole numbers), without decimals, such as 123 or -123
double - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
string - stores text, such as "Hello World". String values are surrounded by double quotes
bool - stores values with two states: true or false
*/

// SYNTAX
// type variableName = Value;

#include <iostream>
using namespace std;

int main()
{
    int num1 = 15; // initial integer value with declaration
    num1 = 5;      // inital value after declaration
    double floatNum2 = 11.3;
    char letter = 'd';
    string text = "Hello Google";
    bool value = true;

    int funcInital(10);   // inital value like function
    int objectInital{12}; // initial value like object

    // display
    cout << num1 << "\n";
    cout << floatNum2 << "\n";
    cout << letter << "\n";
    cout << text << "\n";
    cout << value << "\n";
    cout << funcInital << endl;
    cout << objectInital << endl;

    int age = 23;
    cout << "I am " << age << " years old\n";

    // add variables
    int a = 5, b = 4, sum;
    sum = a + b;
    cout << "sum= " << sum;

    return 0;
}