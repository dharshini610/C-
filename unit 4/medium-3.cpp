#include <iostream>
#include <cmath>
using namespace std;

// Base class: Number
class Number {
    protected:
        double value;
    public:
        Number(double val) {
            value = val;
        }
        virtual void display() = 0;
};

// Derived class: Square (inherits from Number)
class Square : public Number {
    public:
        Square(double val) : Number(val) {}
        void display() {
            double square = pow(value, 2);
            cout << "Square of " << value << " is: " << square << endl;
        }
};

// Derived class: Cube (inherits from Square)
class Cube : public Square {
    public:
        Cube(double val) : Square(val) {}
        void displayCube() {
            double cube = pow(value, 3);
            cout << "Cube of " << value << " is: " << cube << endl;
        }
};

int main() {
    // Test Case 1
    cout << "Enter an integer number: ";
    double num1;
    cin >> num1;
    Square square(num1);
    square.display();

    cout << "Enter an integer number: ";
    double num2;
    cin >> num2;
    Cube cube(num2);
    cube.display();
    cube.displayCube();

    return 0;
}