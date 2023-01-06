#include <iostream>
#include <iomanip>
#include <ios>
using namespace std;

int main()
{
    // cout << flush << "Hello\n"; dont know about flush

    // setw
    cout << "Welcome To Google!\n";
    cout << endl;
    cout << "Name" << setw(20) << "Post" << endl;
    cout << "Fahim" << setw(23) << "Engineer" << endl;

    // setfill
    cout << setfill('-');
    cout << setw(40);
    cout << " " << endl;

    // right setw
    cout << right << setfill('+');
    cout << setw(50) << -123.45 << endl;
    // left setw
    cout << left << setfill('#');
    cout << setw(50) << 10.45 << endl;

    // divider
    cout << "\n\n----------------------------------------\n\n";

    // boolalpha  and noboolalpha
    bool condition{true};
    bool another_condition{false};
    cout << boolalpha;
    cout << condition << endl;
    cout << another_condition << endl;

    // divider
    cout << "\n\n----------------------------------------\n\n";

    cout << noboolalpha;
    cout << condition << endl;
    cout << another_condition << endl;

    // divider
    cout << "\n\n----------------------------------------\n\n";

    // showpos and noshowpos pos = positive
    int num1{33};
    int num2{-32};
    cout << showpos;
    cout << num1 << " " << num2 << endl;
    cout << noshowpos;
    cout << num1 << " " << num2 << endl;

    // divider
    cout << "\n\n----------------------------------------\n\n";

    // dec oct hex
    int num{10};
    cout << "dec: " << dec << num << endl;
    cout << "oct: " << oct << num << endl;
    cout << "hex: " << hex << num << endl;

    // divider
    cout << "\n\n----------------------------------------\n\n";

    // showbase and noshowbase
    // uppercase and nouppercase

    int number{10};
    cout << noshowbase;
    cout << uppercase;
    cout << "dec: " << dec << number << endl;
    cout << "oct: " << oct << number << endl;
    cout << "hex: " << hex << number << endl;

    cout << showbase;
    cout << nouppercase;
    cout << "dec: " << dec << number << endl;
    cout << "oct: " << oct << number << endl;
    cout << "hex: " << hex << number << endl;
    // divider
    cout << "\n\n----------------------------------------\n\n";

    // fixed and scientific

    double a{2.04988888359999999999999}, b{1342.1}, c{1.34e-10};
    cout << a << endl
         << b << endl
         << c << endl;
    cout << "\n_______________________________\n\n";
    cout << fixed;
    cout << a << endl
         << b << endl
         << c << endl;
    cout << "\n_______________________________\n\n";
    cout << scientific;
    cout << a << endl
         << b << endl
         << c << endl;
    cout << "\ndouble value back to defaul\n\n";
    cout.unsetf(ios::scientific | ios::fixed);
    cout << a << endl
         << b << endl
         << c << endl;

    cout << "\n_______________________________\n\n";

    // setprecesion
    long double longDoubleValue = 23.32905924857954857395748485743;
    cout << setprecision(10) << longDoubleValue << endl;

    cout << "\n_______________________________\n\n";

    // showpoint and noshowpoint
    double points = 12.0;
    cout << showpoint;
    cout << points << endl;
    cout << noshowpoint;
    cout << points << endl;
}