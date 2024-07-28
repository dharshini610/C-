#include <iostream>
#include <cmath>

int main() {
    double num, squareRoot;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num >= 0) {
        squareRoot = sqrt(num);
        std::cout << "The square root of " << num << " is " << squareRoot << std::endl;
    } else {
        std::cout << "Error: cannot take square root of a negative number." << std::endl;
    }

    return 0;
}