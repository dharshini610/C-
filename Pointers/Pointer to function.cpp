#include <iostream>
using namespace std;
int square(int x) {
    return x * x;
}
int main() {
    int (*ptr)(int); 
    ptr = &square; 
    int result = ptr(5); 
    cout << "The square of 5 is: " << result <<endl;
    return 0;
}