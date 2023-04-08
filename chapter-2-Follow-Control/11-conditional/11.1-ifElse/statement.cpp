#include <iostream>
using namespace std;

int main()
{
    bool red{false}, green{true}, yellow{false}, police_stop{true};

    /*
        if green : go
        if red, yellow : stop
        if green and police stop : stop
    */

    if (red)
    {
        cout << "Stop\n";
    }
    if (yellow)
    {
        cout << "Go Slow\n";
    }
    if (green)
    {
        cout << "Go\n";
    }

    return 0;
}