#include <iostream>

int main(){

    //          Printing Data
    //-------------------------------
    std::cout << "Hello Google!" << std::endl;

    int age{21};
    std::cout << "Age: " << age << std::endl;
    
    //printing errors to the console
    std::cerr << "std::cerr output : something is wrong!" << std::endl;

    //Printing log message
    std::clog << "std::clog output : this is a log message." << std::endl;


    //          Reading Data 
    //---------------------------------

    int yourAge;
    std::string name;

    std::cout << "Type your name: " << std::endl;
    std::cin >> name; // single value input

    std::cout << "Type your age: " << std::endl;
    std::cin >> yourAge; //single value input

    std::cout << name << " is " << yourAge << " years old!" << std::endl;

    // changing cin 
    std::string firstName, lastName;
    std::cout << "Enter Your First Name and Last Name: " << std::endl;
    std::cin >> firstName >> lastName; // multiple value input
    std::cout << firstName <<" "<< lastName<<" you are WELCOME to GOOGLE" << std::endl;

    // reading data with spaces

    std::string full_name;
    std::cout << "Please enter your fullname: " << std::endl;
    std::getline(std::cin, full_name);

    std::cout << "Hello " << full_name << "! you are welcome to GOOGLE" <<std::endl;

    return 0;
}