/*
 auto keyword:
 The auto keyword specifies that the type of the variable that is being declared will be automatically deducted from its initializer. In the case of functions, if their return type is auto then that will be evaluated by return type expression at runtime. Good use of auto is to avoid long initializations when creating iterators for containers.
 */
#include <iostream>
using namespace std;

int main()
{
    auto var1{12};
    auto var2{12.11};
    auto var3{13.0f};
    auto var4{14.0l};

    auto var5{'e'};
    auto var6{123u};
    auto var7{123ul};
    auto var8{123ll};

    cout << "var2 : " << var1 << " = " << sizeof(var2) << " bytes" << endl;
    cout << "var3 : " << var2 << " = " << sizeof(var3) << " bytes" << endl;
    cout << "var4 : " << var3 << " = " << sizeof(var4) << " bytes" << endl;
    cout << "var1 : " << var4 << " = " << sizeof(var1) << " bytes" << endl;
    cout << "var5 : " << var5 << " = " << sizeof(var5) << " bytes" << endl;
    cout << "var6 : " << var6 << " = " << sizeof(var6) << " bytes" << endl;
    cout << "var7 : " << var7 << " = " << sizeof(var7) << " bytes" << endl;
    cout << "var8 : " << var8 << " = " << sizeof(var8) << " bytes" << endl;

    cout << typeid(var1).name(); // typeid(variableName).name() that revealed data type
}