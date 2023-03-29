#include <iostream>
using namespace std;

int main()
{
    // addition
    int num1 = 110, num2 = 12, sum = num1 + num2;
    int sum2{num1 + num2};
    cout << "sum: " << sum << endl;
    cout << "sum2: " << sum2 << endl;

    // substitution
    int sub{num1 - num2};
    cout << "sub: " << sub << endl;

    // multiplication
    int multi{num1 * num2};
    cout << "multi: " << multi << endl;

    cout << "sizeof num1/num2: " << sizeof(num1) << " bytes " << endl;
    // divide
    double divide{static_cast<double>(num1) / static_cast<double>(num2)};
    cout << "divide: " << divide << endl;

    cout << "sizeof num1/num2: " << sizeof(static_cast<double>(num2)) << " bytes " << endl;

    cout << "sizeof divide: " << sizeof(divide) << " bytes \n";

    // modulus
    int modulus{num1 % num2};
    cout << "Modulus: " << modulus << endl;

    return 0;
}