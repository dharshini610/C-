#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter the value of num1: ";
   cin >> num1;
   cout << "Enter the value of num2: ";
   cin >> num2;
   cout << "Original values: num1 = " << num1 << ", num2 = " << num2 << endl;
    num1 ^= num2;
    num2 ^= num1;
    num1 ^= num2;
    std::cout << "Swapped values: num1 = " << num1 << ", num2 = " << num2 << endl;
    return 0;
}