#include <iostream>
using namespace std;
class Palindrome {
public:
    bool isPalindrome(const std::string &str) {
        int start = 0;
        int end = str.length() - 1;
        while (start < end) {
            if (str[start] != str[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
int main() {
   string input;
   cout << "Enter a string: ";
   cin >> input;
    Palindrome checker;
    if (checker.isPalindrome(input)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }
    return 0;
}