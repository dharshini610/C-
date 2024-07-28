
#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) {
        length = l;
        width = w;
        std::cout << "Rectangle object created: length = " << length << ", width = " << width << std::endl;
    }

    // Destructor
    ~Rectangle() {
        std::cout << "Rectangle object destroyed: length = " << length << ", width = " << width << std::endl;
    }

    // Method to calculate and display the area
    void displayArea() {
        double area = length * width;
        std::cout << "Area: " << area << std::endl;
    }

    // Method to calculate and display the perimeter
    void displayPerimeter() {
        double perimeter = 2 * (length + width);
        std::cout << "Perimeter: " << perimeter << std::endl;
    }
};

int main() {
    Rectangle rectangle1(5.0, 3.0);
    rectangle1.displayArea();
    rectangle1.displayPerimeter();

    Rectangle rectangle2(8.0, 4.0);
    rectangle2.displayArea();
    rectangle2.displayPerimeter();

    return 0;
}