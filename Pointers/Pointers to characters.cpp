#include <iostream>
using namespace std;
int main() {
    char character = 'D';
    char *charPointer = &character;
    cout << "The value of the char variable is: " << *charPointer << endl;
    return 0;
}