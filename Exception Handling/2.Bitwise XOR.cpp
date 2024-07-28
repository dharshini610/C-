#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    std::cout << "Enter the first integer: ";
    std::cin >> num1;
    std::cout << "Enter the second integer: ";
    std::cin >> num2;
    std::cout << "Original values: num1 = " << num1 << ", num2 = " << num2 << std::endl;
    num1 ^= num2;
    num2 ^= num1;
    num1 ^= num2;
    std::cout << "Swapped values: num1 = " << num1 << ", num2 = " << num2 << std::endl;
    return 0;
}