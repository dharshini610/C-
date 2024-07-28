#include <iostream>
using namespace std;
int main() {
    char arr[10] = "Dharsheyy";
    char* ptr = arr;
    cout << "Values of the array: ";
    for (int i = 0; i < 9; i++) {
    cout << *(ptr + i) << " ";
    }
    cout <<endl;
    return 0;
}