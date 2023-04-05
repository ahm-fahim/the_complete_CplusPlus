#include <iostream>
using namespace std;

int main()
{
    bool red{false}, green{true}, yellow{false}, police_stop{true};

    if (green && police_stop)
    {
        cout << "STOP\n";
    }
    else
    {
        cout << "GO\n";
    }
}