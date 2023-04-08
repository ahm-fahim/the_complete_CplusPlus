#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i < 11; i++)
    {
        cout << i << " Every day I dream of becoming a Google employee\n";
    }
    // Scope of the iterator
    // cout << i << endl; // error: ‘i’ was not declared in this scope

    /*
    size_t in c++ is the type returned by the sizeof operator and is frequently used in the standard library to describe sizes and counts. It is a type that may express the size of any object in bytes. The maximum size of an object of any type that is technically feasible can be stored in size_t (including array).
    */
    cout << "\n\n";
    for (size_t i = 11; i < 21; i++)
    {
        cout << i << " Every day I dream of becoming a Google employee\n";
    }

    // iterator declare outside of the loop
    int j{};
    for (j; j < 5; j++)
    {
        cout << "j " << j << endl;
    }
    cout << "Outside Iterator " << j << endl;

    // Leave out the iteration part
    int k{};
    for (; k <= 4; k++)
    {
        cout << "K " << k << endl;
    }
    cout << "Loop Done\n\n\n";

    // Don't hard code value in the loop - it's bad habit

    // GOOD HABIT

    int count{10};
    int start{};

    for (start; start < count; start++)
    {
        cout << "Total Count: " << start << endl;
    }

    cout << "\n\n\n Code Executed Successfully! \n\n\n";
    return 0;
}