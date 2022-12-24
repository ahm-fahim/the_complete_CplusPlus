#include <iostream>
using namespace std;

int main(){
    char character1{'s'};
    char character2{'b'};

    cout << "character1 " << character1 << endl;
    cout << "character2 " << character2 << endl;

    char value = 65;
    cout << "value " << value << endl;
    cout << "value(int) " << static_cast<int>(value) << endl;
    
}