#include <iostream>
class MyClass {
private:
    static int count; // static member variable to keep track of object count
public:
    MyClass() {
        count++; // increment count whenever an object is created
    }
 ~MyClass() {
        count--; // decrement count whenever an object is destroyed
    }
static void showcount() {
        std::cout << "Number of objects created: " << count << std::endl;
    }
};
int MyClass::count = 0;
int main() {
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;
MyClass::showcount(); // display the number of objects created
return 0;
}