#include <iostream>
using namespace std;
int main() {
    float arr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float* ptr = arr;
    cout << "Values of the array: ";
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << std::endl;
   return 0;
}