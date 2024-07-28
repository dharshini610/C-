#include <iostream>
using namespace std;
class Cube {
private:
    int num;
public:
    Cube(int n) {
        num = n;
    }
    Cube(int n, bool display) {
        num = n;
        if (display) {
            cout << "Cube of " << num << " is: " << num * num * num << endl;
        }
    }
    void displayCube() {
        cout << "Cube of " << num << " is: " << num * num * num << endl;
    }
};
int main() {
    int num;
    bool display;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Do you want to display the cube (1 for yes, 0 for no): ";
    cin >> display;

    if (display) {
        Cube c1(num, true);
    } else {
        Cube c2(num);
        c2.displayCube();
    }

    return 0;
}