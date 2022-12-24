#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double num1{3.4};
    double num2{};
    double num3{};

    // infinity
    double result1{num1 / num2};

    cout << "result1 :" << result1 << endl; // inf

    double result2{num2 / num3};
    cout << "result2 :" << result2 << endl; // -nan

    cout << setprecision(10);
    double num4{3.498e-11};
    cout << "num4 " << num4 << endl;

    return 0;
}