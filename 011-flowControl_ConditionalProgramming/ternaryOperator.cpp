#include <iostream>
using namespace std;

int main()
{
    int max{}, min{}, num1{22}, num2{23};

    max = (num1 > num2) ? num1 : num2;
    min = (num1 > num2) ? num2 : num1;

    cout << "Max = " << max << endl;
    cout << "Min = " << min << endl;

    return 0;
}