#include <iostream>
#include <string>
using namespace std;
int main() {
    string str = "Hello, World!";
    string *ptr = &str;
    cout << "Value of str: " << *ptr << endl;
    return 0;
}