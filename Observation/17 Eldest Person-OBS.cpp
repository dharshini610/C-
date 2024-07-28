#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    Person(std::string n, int a) : name(n), age(a) {}

    std::string getName() { return name; }
    int getAge() { return age; }

    Person* findEldest(Person* persons, int size) {
        Person* eldest = this;
        for (int i = 0; i < size; i++) {
            if (persons[i].getAge() > eldest->getAge()) {
                eldest = &persons[i];
            }
        }
        return eldest;
    }

    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Person persons[] = {
        Person("John", 25),
        Person("Alice", 30),
        Person("Bob", 20),
        Person("Eve", 35)
    };

    int size = sizeof(persons) / sizeof(Person);

    Person* eldest = persons[0].findEldest(persons, size);

    std::cout << "Eldest person: ";
    eldest->display();

    return 0;
}