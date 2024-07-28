#include <iostream>
#include <cmath>

int main() {
    double num, cubeRoot;

    std::cout << "Enter a number: ";
    std::cin >> num;

    cubeRoot = (num >= 0)? pow(num, 1.0/3.0) : -pow(-num, 1.0/3.0);

    std::cout << "The cube root of " << num << " is " << cubeRoot << std::endl;

    return 0;
}