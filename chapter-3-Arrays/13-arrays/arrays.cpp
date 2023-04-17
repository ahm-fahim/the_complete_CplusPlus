#include <iostream>
using namespace std;

int main()
{
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

    cout << "\n\n Salaries \n\n";

    int salaries[]{22, 34, 564, 674, 785, 7856, 856, 45, 678, 45};
    int i{};
    while (i < 10)
    {
        cout << salaries[i] << ", ";
        i++;
    }

    cout << "\n\n\n";
}