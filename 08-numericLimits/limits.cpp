#include <iostream>
#include <limits>
using namespace std;

int main()
{
    cout << "The name for short is from " << numeric_limits<short>::min() << " to " << numeric_limits<short>::max() << endl;

    cout << "The name for unsigned short is from " << numeric_limits<unsigned short>::min() << " to " << numeric_limits<unsigned short>::max() << endl;

    cout << "The name for int is from " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << endl;

    cout << "The name for unsigned int is from " << numeric_limits<unsigned int>::min() << " to " << numeric_limits<unsigned int>::max() << endl;

    cout << "The name for long is from " << numeric_limits<long>::min() << " to " << numeric_limits<long>::max() << endl;

    cout << "The name for float is from " << numeric_limits<float>::min() << " to " << numeric_limits<float>::max() << endl;

    cout << "The name for double is from " << numeric_limits<double>::min() << " to " << numeric_limits<double>::max() << endl;

    cout << "The name for long double is from " << numeric_limits<long double>::min() << " to " << numeric_limits<long double>::max() << endl;

    // other facilities
    cout << "Is signed int " << numeric_limits<int>::is_signed << endl;
    cout << "Int digit " << numeric_limits<int>::digits << endl;
}