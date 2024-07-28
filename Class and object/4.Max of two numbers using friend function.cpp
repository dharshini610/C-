#include <iostream>
using namespace std;
class Number {
private:
    int value;
public:
    Number(int v) : value(v) {}
    friend int max(Number n1, Number n2);
};
int max(Number n1, Number n2) {
    return (n1.value > n2.value) ? n1.value : n2.value;
}
int main() {
    Number num1(10), num2(20);
    std::cout << "Maximum: " << max(num1, num2) << std::endl;
    return 0;
}