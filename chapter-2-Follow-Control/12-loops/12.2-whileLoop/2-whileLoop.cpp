#include <iostream>
using namespace std;

int main()
{
    const unsigned int COUNT{15};
    unsigned int i{10};

    while (i < COUNT)
    {
        cout << "Count = " << i << endl;
        cout << "While Loop\n";
        ++i;
    }

    return 0;
}