#include <iostream>

int main() 
{ 
    // print welcome messages to the terminal
    std::cout << "you are a secret agent breaking into a secure server room...";
    std::cout << std::endl;
    std::cout << "you need to enter the correct codes to continue...";

    // declare 3 number code
    int a =  4;
    const int b = 3;
    const int c = 2;

    a = 7;

    int sum = a + b + c;
    int product = a * b * c;

    /*
    this is a 
    multi line comment
    */

    // print sum and product to the terminal
    std::cout << std::endl;
    std::cout << sum;
    std::cout << std::endl;
    std::cout << product;

    return 0; 
}