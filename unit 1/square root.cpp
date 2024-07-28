#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double number;
    cout << "Enter a number: ";
    cin >> number;

    if (number >= 0) {
        double result = sqrt(number);
        cout << "Square root of " << number << " is " << result << endl;
    } else {
        cout << "Cannot calculate square root of a negative number." << endl;
    }

    return 0;
}