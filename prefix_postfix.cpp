#include <iostream>
using namespace std;

int main()
{
    int value{5};
    value = value + 1;
    cout << value << endl;

    value = value - 1;
    cout << value << endl;

    cout << value++ << endl;
    cout << ++value << endl;
    cout << value-- << endl;
    cout << --value << endl;

    return 0;
}