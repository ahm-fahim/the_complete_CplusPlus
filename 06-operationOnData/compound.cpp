#include <iostream>
using namespace std;

int main()
{
    int value{10};

    cout << " Value += 5 : " << (value += 5) << endl;
    cout << " Value -= 5 : " << (value -= 5) << endl;
    cout << " Value *= 5 : " << (value *= 5) << endl;
    cout << " Value /= 5 : " << (value /= 5) << endl;
    cout << " Value %= 5 : " << (value %= 5) << endl;
}