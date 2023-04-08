#include <iostream>
using namespace std;

int main(){
    int num1 = 15; // Decimal
    int num2 = 017; // Octal
    int num3 = 0x0f; //Hexadecimal
    int num4 = 0b00001111; // Binary

    // all above this variable return 15
    cout << "Decimal Num1: " << num1 << endl;
    cout << "Octal Num2: " << num2 << endl;
    cout << "Hexadecimal Num3: " << num3 << endl;
    cout << "Binary Num4: " << num4 << endl;

    return 0;
}