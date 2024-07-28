#include <iostream>
using namespace std;
class Rectangle {
    private:
        int length;
        int width;
    public:
        Rectangle(int l, int w) {
            length = l;
            width = w;
        }
        int calculateArea() {
            return length * width;
        }
};
int main() {
    Rectangle rectangles[] = {
        Rectangle(4, 7),  
        Rectangle(5, 4)   
    };
    for (int i = 0; i < 2; i++) {
        cout << "Area of Rectangle " << i + 1 << ": " << rectangles[i].calculateArea() << endl;
    }
    return 0;
}