#include <iostream>
using namespace std;

int main()
{

    // int
    cout << "INT" << endl;
    int i_value1{10};
    int i_value2{-10};

    cout << "i_value1: " << i_value1 << endl;
    cout << "i_value2: " << i_value2 << endl;
    cout << "sizeof i_value1 & i_value2 :" << sizeof(i_value1) << endl
         << sizeof(i_value2) << endl;
    cout << "--------------------------------\n";

    // signed int
    cout << "Signed INT" << endl;
    signed int s_value1{10};
    signed int s_value2{-10};
    cout << "s_value1: " << s_value1 << endl;
    cout << "s_value2: " << s_value2 << endl;
    cout << "sizeof s_value1 & s_value2 :" << sizeof(s_value1) << endl
         << sizeof(s_value2) << endl;
    cout << "--------------------------------\n";

    // unsigned int
    cout << "unSigned INT" << endl;
    unsigned int uns_value1{10};
    //--------------------------------
    // unsigned int uns_value2{-10};// error: narrowing conversion of ‘-10’ from ‘int’ to ‘unsigned int’ [-Wnarrowing]
    //------------------------------------

    cout << "uns_value1: " << uns_value1 << endl;
    cout << "sizeof uns_value1 & uns_value2 :" << sizeof(uns_value1) << endl;

    cout << "--------------------------------\n";

    // 2 bytes short
    short short_var{-333};
    short int short_int_var{11};
    signed short signed_short_var{43};
    signed short int signed_short_int_var{32};
    unsigned short int unsigned_short_int{134};

    // 4 byte signed unsigned
    int int_var{33};
    signed signed_var{44};
    signed int signed_int_var{55};
    unsigned int unsigned_int_var{66};

    // 4 byte 8 byte long
    long long_var{111};
    long int long_int_var{222};
    signed long signed_long_var{333};
    unsigned long int unsigned_long_int_var{444};

    // 8 byte long long
    long long long_long_var{2222};
    long long int long_long_int_var{3333};
    signed long long signed_long_long_var{6666};
    signed long long int signed_long_long_int_var{9999};

    // print the size of short, long , long long, signed , unsigned int
    // int
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "long: " << sizeof(long) << " bytes" << endl;
    cout << "short: " << sizeof(short) << " bytes" << endl;
    cout << "long: " << sizeof(long) << " bytes" << endl;
    cout << "long long: " << sizeof(long long) << " bytes" << endl;
    cout << "signed: " << sizeof(signed) << " bytes" << endl;
    cout << "unsigned: " << sizeof(unsigned) << " bytes" << endl
         << endl;
    cout << "--------------------------------\n";

    // short
    cout << "short : " << sizeof(short) << " bytes" << endl;
    cout << "short int: " << sizeof(short int) << " bytes" << endl;
    cout << "signed short: " << sizeof(signed short) << " bytes" << endl;
    cout << "signed short int: " << sizeof(signed short int) << " bytes" << endl
         << endl;
    cout << "--------------------------------\n";

    // long
    cout << "long: " << sizeof(long) << " bytes" << endl;
    cout << "long int: " << sizeof(long int) << " bytes" << endl;
    cout << "signed long: " << sizeof(signed long) << " bytes" << endl;
    cout << "signed long int: " << sizeof(signed long int) << " bytes" << endl
         << endl;
    cout << "--------------------------------\n";

    // long long
    cout << "long long: " << sizeof(long long) << " bytes" << endl;
    cout << "long long int: " << sizeof(long long int) << " bytes" << endl;
    cout << "signed long long: " << sizeof(signed long long) << " bytes" << endl;
    cout << "signed long long int: " << sizeof(signed long long int) << " bytes" << endl
         << endl;
    cout << "--------------------------------\n";
}