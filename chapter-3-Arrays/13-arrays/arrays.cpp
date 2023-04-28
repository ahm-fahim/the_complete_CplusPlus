#include <iostream>
using namespace std;

int main()
{
    // declare array
    int array[5]; // junk data

    cout << "READING ARRAY DATA \n\n";
    // reading array data
    cout << "Array [0] " << array[0] << endl;
    cout << "Array [1] " << array[1] << endl;
    cout << "Array [2] " << array[2] << endl;
    cout << "Array [3] " << array[3] << endl;
    cout << "Array [4] " << array[4] << endl
         << endl;

    // data stored by indexing  1 by 1
    int scores[10];

    scores[0] = 10;
    scores[1] = 20;
    scores[2] = 30;
    scores[3] = 40;

    cout << "\n INPUT DATA ON ARRAY BY ITS INDEX NUMBER \n\n";
    for (int i = 0; i <= 10; i++)
    {
        cout << scores[i] << ", ";
    }

    //------------------------------------------------------------------------------
    int salaries[]{22, 34, 564, 674, 785, 7856, 856, 45, 678, 45};

    // get array size
    cout << "\n\nGET ARRAY SIZE " << size(salaries) << endl
         << endl;

    // printing array with this size limit
    int i{};
    cout << "PRINTING DATA WITH ITS ARRAY LIMITS \n\n [ ";

    for (int i; i < size(salaries); i++)
    {
        cout << salaries[i] << ", ";
    }
    cout << "]\n\n Salaries \n\n";

    while (i < 10)
    {
        cout << salaries[i] << ", ";
        i++;
    }

    cout << "\n\n";
    // array declaration omit sizes
    int arr_sizes[]{34, 435, 5, 3, 5, 4, 3};

    // will print this with a range based for loop
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

    // SIZE OF
    cout << "Size of salaries " << sizeof(salaries) << endl;
    cout << "Size of salaries[0] " << sizeof(salaries[0]) << endl;
    cout << "Size of salaries / = " << sizeof(salaries) / sizeof(salaries[0]) << endl;

    // char

    char massages[5]{'h', 'e', 'l', 'l', 'o'};
    for (auto c : massages)
    {
        cout << " Massage " << massages << endl;
    }
    char massages2[6]{'H', 'E', 'L', 'L', 'O'};
    for (auto c : massages2)
    {
        cout << " Massage " << massages2 << endl;
    }
}