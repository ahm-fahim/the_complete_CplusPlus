#include <iostream>
using namespace std;

int main()
{
    int num1{33}, num2{22};

    bool result = (num1 < num2);
    cout << boolalpha << "Result1 = " << result << endl;

    if (result == true)
    {
        cout << num1 << " Less than " << num2 << endl;
    }
    if (!(result == true))
    {
        cout << num1 << " Greater than " << num2 << endl;
    }
    return 0;
}