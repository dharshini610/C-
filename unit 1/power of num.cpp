#include <iostream>
#include <cmath>
using namespace std;

double powerUsingLoop(double base, int exponent) {
    double result = 1.0;

    for (int i = 0; i < abs(exponent); i++) {
        result *= base;
    }

    if (exponent < 0) {
        return 1.0 / result;
    } else {
        return result;
    }
}

double powerUsingPow(double base, int exponent) {
    return pow(base, exponent);
}

int main() {
    double base;
    int exponent;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    cout << "Power using loop: " << powerUsingLoop(base, exponent) << endl;
    cout << "Power using pow function: " << powerUsingPow(base, exponent) << endl;

    return 0;
}