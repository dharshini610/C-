#include <iostream>
using namespace std;
class Cube {
public:
    Cube(int n) {
        cout << "Cube of numbers up to " << n << ":\n";
        for (int i = 1; i <= n; i++) {
            int cub = i * i * i;
            cout << "Number is : " << i << " and the cube of " << i << " is: " << cub << endl;
        }
    }
    ~Cube() {
        cout << "Destructor called.\n";
    }
};
int main() {
    int n;
    cout << "Input the number of terms: ";
    cin >> n;
    Cube c(n);
    return 0;
}