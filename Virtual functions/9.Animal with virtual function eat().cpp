#include <iostream>
#include <string>

class Animal {
public:
    virtual void eat() = 0; // pure virtual function
};

class Herbivore : public Animal {
public:
    void eat() override {
        std::cout << "I'm a herbivore, I eat plants." << std::endl;
    }
};

class Carnivore : public Animal {
public:
    void eat() override {
        std::cout << "I'm a carnivore, I eat meat." << std::endl;
    }
};

int main() {
    Herbivore herbivore;
    Carnivore carnivore;

    std::cout << "Herbivore eating:" << std::endl;
    herbivore.eat();

    std::cout << "\nCarnivore eating:" << std::endl;
    carnivore.eat();

    return 0;
}