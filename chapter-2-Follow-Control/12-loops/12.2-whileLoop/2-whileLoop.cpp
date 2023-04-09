#include <iostream>
using namespace std;

int main()
{
    const unsigned int COUNT{10};
    unsigned int i{};

    while (i < COUNT)
    {
        cout << "Count = " << i << endl;
        cout << "While Loop\n";
        ++i;
    }

    return 0;
}