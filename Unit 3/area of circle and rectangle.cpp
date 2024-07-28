#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    Circle(double r, bool) : radius(r) { cout << "Area of Circle: " << area() << endl; }

    double area() { return 3.14 * radius * radius; }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}
    Rectangle(double l, double w, bool) : length(l), width(w) { cout << "Area of Rectangle: " << area() << endl; }

    double area() { return length * width; }
};

class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}
    Triangle(double b, double h, bool) : base(b), height(h) { cout << "Area of Triangle: " << area() << endl; }

    double area() { return 0.5 * base * height; }
};

int main() {
    Circle c(5, true);
    Rectangle r(4, 5, true);
    Triangle t(3, 4, true);

    return 0;
}