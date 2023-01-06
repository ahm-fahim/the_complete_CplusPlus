#include <iostream>
using namespace std;

int main()
{
    int value{5};
    value = value + 1;
    cout << "value+1 : " << value << endl;

    value = 5;
    value = value - 1;
    cout << "value-1 : " << value << endl;

    value = 5;
    cout << "value++ : " << value++ << endl;

    value = 5;
    cout << "++value : " << ++value << endl;

    value = 5;
    cout << "value-- : " << value-- << endl;

    value = 5;
    cout << "--value : " << --value << endl;

    return 0;
}