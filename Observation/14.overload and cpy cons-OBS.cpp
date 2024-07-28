#include <iostream>
using namespace std;
class MyClass {
private:
    int* ptr;

public:
    MyClass(int value = 0) {
        ptr = new int;
        *ptr = value;
        std::cout << "Constructor called" << std::endl;
    }

    // Copy constructor
    MyClass(const MyClass& obj) {
        ptr = new int;
        *ptr = *(obj.ptr);
        std::cout << "Copy constructor called" << std::endl;
    }

    // Assignment operator
    MyClass& operator=(const MyClass& obj) {
        if (this != &obj) {
            delete ptr;
            ptr = new int;
            *ptr = *(obj.ptr);
            std::cout << "Assignment operator called" << std::endl;
        }
        return *this;
    }

    ~MyClass() {
        delete ptr;
        std::cout << "Destructor called" << std::endl;
    }

    void display() {
        std::cout << "Value: " << *ptr << std::endl;
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2;

    // Copy constructor is called
    MyClass obj3 = obj1;
    obj3.display();

    // Assignment operator is called
    obj2 = obj1;
    obj2.display();

    return 0;
}