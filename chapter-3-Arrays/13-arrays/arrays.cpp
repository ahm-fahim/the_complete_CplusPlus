#include <iostream>
using namespace std;

int main()
{
    // data stored by indexing  1 by 1
    int scores[10];

    scores[0] = 10;
    scores[1] = 20;
    scores[2] = 30;
    scores[3] = 40;

    cout << "\n Scores \n\n";
    for (int i = 0; i <= 10; i++)
    {
        cout << scores[i] << ", ";
    }

    // data store
    cout << "\n\n Salaries \n\n";

    int salaries[]{22, 34, 564, 674, 785, 7856, 856, 45, 678, 45};
    int i{};
    while (i < 10)
    {
        cout << salaries[i] << ", ";
        i++;
    }

    cout << "\n\n";
    // array declaration omit sizes
    int arr_sizes[]{34, 435, 5, 3, 5, 4, 3};

    for (auto value : arr_sizes)
    {
        cout << "Value : " << value << endl
             << endl;
    }

    // constant array
    const int multipliers[]{3, 4, 5, 6};
    // multipliers[1] = 2; // can't change element of const array

    // operation on array data
    int sum{0};
    for (int element : salaries)
    {
        sum += element;
    }
    cout << "Sum = " << sum << endl
         << endl;
}