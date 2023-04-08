#include <iostream>
using namespace std;

//returnType functionName (parameter){FUNCTION BODY}
int addNums(int num1, int num2){
    int sum = num1 + num2; // every single line of a program called statement 
    return sum;
}

/*
FUNCTION is like a machine.
The benefits of a function is we can reuse a code and don't need to repeat code,
Thats why the program makes smaller and easier. 
*/
int main(){
    // called function 
    cout << addNums(2, 3) << endl;
    cout << addNums(100, 330) << endl;

    return 0;
}