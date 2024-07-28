#include <iostream>
using namespace std;

void setNthBit(int& num, int n) {
    if (n >= 0 && n < sizeof(int) * 8) {
        num |= (1 << n);
    } else {
        cout << "Invalid bit position. It should be between 0 and " << (sizeof(int) * 8 - 1) << endl;
    }
}

int main() {
    int num, n;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter the bit position to set (0-" << (sizeof(int) * 8 - 1) << "): ";
    cin >> n;

    cout << "Before setting the " << n << "th bit: " << num << endl;

    setNthBit(num, n);

    cout << "After setting the " << n << "th bit: " << num << endl;

    return 0;
}