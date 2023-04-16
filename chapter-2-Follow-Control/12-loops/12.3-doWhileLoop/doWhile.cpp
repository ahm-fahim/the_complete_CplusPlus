#include <iostream>
using namespace std;

int main()
{
    // iterator
    int count{10};
    int i{1};

    do
    {
        cout << "[" << i << "]"
             << " Do while loop.\n";
        i++; // increment
    } while (i < count);

    return 0;
}