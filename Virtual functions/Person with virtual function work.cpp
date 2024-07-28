#include <iostream>
#include <string>

class Person {
public:
    virtual void work() = 0; // pure virtual function
};

class Employee : public Person {
public:
    void work() override {
        std::cout << "I'm an employee, I work on tasks assigned by my manager." << std::endl;
    }
};

class Manager : public Person {
public:
    void work() override {
        std::cout << "I'm a manager, I manage projects and teams." << std::endl;
    }
};

int main() {
    Employee employee;
    Manager manager;

    std::cout << "Employee working:" << std::endl;
    employee.work();

    std::cout << "\nManager working:" << std::endl;
    manager.work();

    return 0;
}