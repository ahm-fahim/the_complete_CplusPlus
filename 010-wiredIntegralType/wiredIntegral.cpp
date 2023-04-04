#include <iostream>
using namespace std;

int main()
{
    short int var1{10}; // 2 bytes
    short int var2{11};

    char var3{40};
    char var4{50};

    cout << "SIZE OF" << endl;

    cout << "var1 = " << sizeof(var1) << endl;
    cout << "var2 = " << sizeof(var2) << endl;
    cout << "var4 = " << sizeof(var4) << endl;
    cout << "var3 = " << sizeof(var3) << endl;

    auto result1 = var1 + var2;
    auto result2 = var3 + var4;

    cout << "sizeof Result1 = " << sizeof(result1) << endl; // 4 bytes
    cout << "sizeof Result2 = " << sizeof(result2) << endl;

    return 0;
}