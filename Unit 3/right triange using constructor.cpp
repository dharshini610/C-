#include <iostream>
using namespace std;
class Triangle {
private:
    int num;
    int size;
public:
    Triangle(int n, int s) {
        num = n;
        size = s;
    }
    Triangle(int n, int s, bool print) {
        num = n;
        size = s;
        if (print) {
            printTriangle();
        }
    }
    void printTriangle() {
        for (int i = 1; i <= size; i++) {
            for (int j = 1; j <= i; j++) {
                cout << num << " ";
            }
            cout << endl;
        }
    }
};
int main() {
    int num;
    int size;
    bool print;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter the size of the triangle: ";
    cin >> size;

    cout << "Do you want to print the triangle (1 for yes, 0 for no): ";
    cin >> print;
    if (print) {
        Triangle t1(num, size, true);
    } else {
        Triangle t2(num, size);
        t2.printTriangle();
    }
    return 0;
}