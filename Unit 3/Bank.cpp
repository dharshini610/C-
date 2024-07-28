#include <iostream>
using namespace std;

class AddAmount {
private:
    double amount;

public:
    // Constructor without parameter
    AddAmount() : amount(50.0) {}

    // Constructor with parameter
    AddAmount(double add) : amount(50.0 + add) {}

    void displayAmount() {
        cout << "Final amount in the Piggie Bank: $" << amount << endl;
    }
};

int main() {
    int numTests;
    cout << "Enter the number of test cases: ";
    cin >> numTests;

    for (int i = 0; i < numTests; i++) {
        double add;
        cout << "Enter the amount to add: ";
        cin >> add;

        AddAmount piggy(add);
        piggy.displayAmount();
    }

    return 0;
}