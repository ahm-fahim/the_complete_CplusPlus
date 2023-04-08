#include <iostream>
using namespace std;

int main()
{
    // logical operators are "and= && or= || not= !"

    // And
    //  if num1 && num2 both are true then return 'true'

    bool value1 = false;
    bool value2 = false;
    if (value1 && value2)
    {
        cout << " True\n";
    }
    else
    {
        cout << "False\n";
    }

    //or
    //if  value1 || value2  both are false then return 'false' else return true
    if (value1 || value2)
    {
        cout << " True\n";
    }
    else
    {
        cout << "False\n";
    }
    //not 
    // two value always not equal

    if (value1 != value2)
    {
        cout << " True\n";
    }
    else
    {
        cout << "False\n";
    }
}