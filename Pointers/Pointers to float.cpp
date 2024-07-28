#include <iostream>
using namespace std;
int main() {
   float number = 4.2;  
    float *ptr = &number;  
    cout << "The value of the float is: " << *ptr << endl;
 return 0;
}