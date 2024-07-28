#include <iostream>

class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    friend Complex addComplex(const Complex& c1, const Complex& c2);
    void display() {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

Complex addComplex(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1(3, 4);
    Complex c2(2, 5);
    std::cout << "Complex number 1: ";
    c1.display();
    std::cout << "Complex number 2: ";
    c2.display();
    Complex c3 = addComplex(c1, c2);
    std::cout << "Sum of complex numbers: ";
    c3.display();
    return 0;
}