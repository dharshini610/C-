#include <iostream>

class MyClass {
private:
    int data;

public:
    // Overloaded new operator
    void* operator new(size_t size) {
        std::cout << "Custom new operator called" << std::endl;
        return ::operator new(size);
    }

    // Overloaded delete operator
    void operator delete(void* ptr) {
        std::cout << "Custom delete operator called" << std::endl;
        ::operator delete(ptr);
    }

    // Constructor
    MyClass(int value = 0) : data(value) {
        std::cout << "Constructor called" << std::endl;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called" << std::endl;
    }

    void display() {
        std::cout << "Data: " << data << std::endl;
    }
};

int main() {
    MyClass* obj = new MyClass(10);
    obj->display();

    delete obj;

    return 0;
}