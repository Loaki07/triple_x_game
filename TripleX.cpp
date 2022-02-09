#include <iostream>

int main() 
{ 
    std::cout << "you are a secret agent breaking into a secure server room...";
    std::cout << std::endl;
    std::cout << "you need to enter the correct codes to continue...";

    int a =  4;
    const int b = 3;
    const int c = 2;

    a = 7;

    int sum = a + b + c;
    int product = a * b * c;

    std::cout << std::endl;
    std::cout << sum;
    std::cout << std::endl;
    std::cout << product;

    return 0; 
}