#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "MATH FUNCTION" << endl;

    double weight{6.7};
    double savings{-5000};
    double exponential = exp(3); // y = a ( 1+ r )^x

    cout << "weight rounded to floor is " << floor(weight) << endl;

    cout << "weight rounded to ceil is " << ceil(weight) << endl;

    cout << "abs of weight is " << abs(weight) << endl; // absolute

    cout << "abs of savings is " << abs(savings) << endl;

    cout << "exponential = " << exponential << endl;

    cout << "Power 3^2 = " << pow(3, 2) << endl;

    cout << "Log : to get 54.49 you would elevate e the power of : " << log(54.59) << endl;

    cout << "Log10: to get 1000 you had need to elevate 10 to the power of : " << log10(1000) << endl;

    cout << " The square root of 81 is = " << sqrt(81) << endl;

    cout << "2.4 rounded to " << round(2.4) << endl;
    cout << "2.6 rounded to " << round(2.6) << endl;
}