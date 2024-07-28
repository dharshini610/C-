#include <iostream>
using namespace std;
class MyClass {
private:
    int x;
public:
    MyClass(int val) {
        this->x = val; 
    }
    void display() {
        std::cout << "x = " << this->x << std::endl; 
    }
};
int main() {
    MyClass obj(20);
    obj.display();
    return 0;
}