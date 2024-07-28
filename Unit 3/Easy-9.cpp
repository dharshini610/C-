#include <iostream>
using namespace std;
class DivisibleBy9 {
public:
    DivisibleBy9() {
        count = 0;
        sum = 0;
        for (int i = 100; i <= 200; i++) {
            if (i % 9 == 0) {
                count++;
                sum += i;
            }
        }
        cout << "Number of integers between 100 and 200 that are divisible by 9: " << count << endl;
        cout << "Sum of integers between 100 and 200 that are divisible by 9: " << sum << endl;
    }
    ~DivisibleBy9() {
        cout << "Destructor called." << endl;
    }
private:
    int count;
    int sum;
};
int main() {
    DivisibleBy9 db9;
    return 0;
}