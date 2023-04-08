#include <iostream>
using namespace std;

//Operation Precedency 

int main(){
    int a{6}, b{3},c{8},d{9},e{3},f{2},g{5};

    int result = a + b * c - d / e - f + g;
    cout << "result : " << result << endl;

    return 0;
}