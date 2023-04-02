#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "MATH FUNCTION" << endl;

    double weight{6.7};
    double savings{-5000};
    double exponential = exp(3); // (1*2*3*4)

    cout << "weight rounded to floor is " << floor(weight) << endl;

    cout << "weight rounded to ceil is " << ceil(weight) << endl;

    cout << "abs of weight is " << abs(weight) << endl; // absolute

    cout << "abs of savings is " << abs(savings) << endl;

    cout << "exponential = " << exponential << endl;
}