#include <iostream>
#include <string>
using namespace std;
class BinaryToOctal {
public:
    BinaryToOctal(string binary) {
        cout << "Octal equivalent: ";
        int decimal = 0;
        for (char c : binary) {
            decimal = decimal * 2 + (c - '0');
        }
        while (decimal!= 0) {
            cout << (char)((decimal % 8) + '0');
            decimal /= 8;
        }
        cout << endl;
    }
};
int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    BinaryToOctal bto(binary);
    return 0;
}