#include <iostream>
using namespace std;

int main()
{
    bool red{false}, green{true}, yellow{false}, police_stop{true};

    if (green)
    {
        if (police_stop)
        {
            cout << "STOP" << endl;
        }
        else
        {
            cout << "Go" << endl;
        }
    }


    return 0;
}