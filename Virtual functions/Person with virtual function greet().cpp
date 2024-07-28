#include <iostream>
#include <string>
using namespace std;
class Person {
public:
    virtual void greet() = 0; // pure virtual function
};
class Student : public Person {
private:
    string name;
    int age;
public:
    Student(std::string n, int a) : name(n), age(a) {}
    void greet() override {
    cout << "Hello, my name is " << name << " and I'm " << age << " years old. I'm a student." << std::endl;
    }
};
class Teacher : public Person {
private:
    string name;
    int age;
    string subject;
public:
    Teacher(string n, int a, std::string s) : name(n), age(a), subject(s) {}
    void greet() override {
       cout << "Hello, my name is " << name << " and I'm " << age << " years old. I'm a teacher of " << subject << "." << std::endl;
    }
};
int main() {
    Student student("John", 20);
    Teacher teacher("Ms. Smith", 35, "Math");
    cout << "Student greeting:" << std::endl;
    student.greet();
    cout << "\nTeacher greeting:" << std::endl;
    teacher.greet();
    return 0;
}