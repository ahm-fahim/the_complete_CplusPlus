#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float float_var{2.123456789f};
    double double_var{32.42344312};
    long double long_double_var{23.1223543L};

    cout << "float_var : " << sizeof(float) << " bytes \n";
    cout << "double_var : " << sizeof(double) << " bytes \n";
    cout << "long_double_var : " << sizeof(long double) << " bytes \n";

    cout << setprecision(20) << endl;
    cout << "float_var : " << float_var << "\n";
    cout << "double_var : " << double_var << "\n";
    cout << "long_double_var : " << long_double_var << "\n";
}