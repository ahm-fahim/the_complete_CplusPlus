#include <iostream>
using namespace std;

int main()
{
    bool red_light{true};
    bool green_light{false};

    if (red_light == true)
    {
        cout << "Stop Vichels\n";
    }
    else
    {
        cout << "Go Through!\n";
    }
}