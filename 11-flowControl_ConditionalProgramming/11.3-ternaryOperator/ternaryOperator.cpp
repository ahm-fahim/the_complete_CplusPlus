#include <iostream>
using namespace std;

int main()
{
    int max{}, min{}, num1{22}, num2{23};

    // variable = (condition)? value1/variable1 : value2/variable2;
    max = (num1 > num2) ? num1 : num2;
    min = (num1 > num2) ? num2 : num1;

    cout << "Max = " << max << endl;
    cout << "Min = " << min << endl;

    // ternary initialize
    bool fast = true;

    int speed{fast ? 300 : 230};

    cout << "The speed is " << speed << endl;

    int a, b;
    auto sum = (a + b) ? 22.3f : 10.4f;
    cout << "Sum = " << sum << endl;

    return 0;
}