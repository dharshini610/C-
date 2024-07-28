#include <iostream>

using namespace std;

class class_1;
class class_2;

class class_1 {
private:
    int val1;

public:
    class_1(int v) {
        val1 = v;
    }

    friend void swap(class_1&, class_2&);

    void display() {
        cout << "class_1 value: " << val1 << endl;
    }
};

class class_2 {
private:
    int val2;

public:
    class_2(int v) {
        val2 = v;
    }

    friend void swap(class_1&, class_2&);

    void display() {
        cout << "class_2 value: " << val2 << endl;
    }
};

void swap(class_1& c1, class_2& c2) {
    int temp = c1.val1;
    c1.val1 = c2.val2;
    c2.val2 = temp;
}

int main() {
    class_1 obj1(10);
    class_2 obj2(20);

    cout << "Before swapping:" << endl;
    obj1.display();
    obj2.display();

    swap(obj1, obj2);

    cout << "After swapping:" << endl;
    obj1.display();
    obj2.display();

    return 0;
}