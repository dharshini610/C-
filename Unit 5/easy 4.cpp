#include <iostream>
using namespace std;

class Grandson;

class Grandfather {
private:
    double propertyValue;
public:
    Grandfather(double value) {
        propertyValue = value;
    }

    void will(Grandson& grandson) {
        grandson.receiveProperty(propertyValue);
    }
};

class Grandson {
private:
    double propertyValue;
public:
    void receiveProperty(double value) {
        if (value > 0) {
            cout << "Received the Property" << endl;
            propertyValue = value;
        } else {
            cout << "Invalid property value" << endl;
        }
    }
};

int main() {
    double propertyValue;
    cout << "Enter the property value: ";
    cin >> propertyValue;

    while (cin.fail()) {
        cout << "Invalid input. Please enter a valid property value: ";
        cin.clear();
        cin.ignore(10000, '\n');
        cin >> propertyValue;
    }

    Grandfather grandfather(propertyValue);
    Grandson grandson;
    grandfather.will(grandson);

    return 0;
}