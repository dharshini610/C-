#include <iostream>
using namespace std;
class AddAmount {
protected:
    int amount;
public:
    AddAmount() : amount(50) {}  
    virtual void add(int addAmount = 0) {
        amount += addAmount;
    }
    void displayAmount() const {
        cout << "Total Amount is = " << amount << endl;
    }
};
class AddAmountWithParameter : public AddAmount {
public:
    AddAmountWithParameter(int addAmount) {
        add(addAmount);
    }
};
int main() {
    int addAmount;
    cout << "Enter the amount: ";
    cin >> addAmount;
    AddAmountWithParameter piggyBank(addAmount);
    piggyBank.displayAmount();
    return 0;
}