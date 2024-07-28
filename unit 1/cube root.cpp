#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double num, cubeRoot;

    cout << "Enter a number: ";
    cin >> num;

    cubeRoot = (num >= 0)? cbrt(num) : -cbrt(-num);

    cout << "Cube root of " << num << " = " << cubeRoot << endl;

    return 0;
}