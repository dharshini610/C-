#include <iostream>
#include <cctype> // for tolower()
using namespace std;
bool isValidUsername(const string& username) {
    if (username.length() < 3 || username.length() > 10) {
        return false; 
    }
    for (char c : username) {
        if (!isalnum(c) && c!= '_') {
            return false; 
        }
    }
    return true; 
}
int main() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    if (isValidUsername(username)) {
        cout << "Username is valid." << endl;
    } else {
        cout<<"Username is not valid. " << endl;
    }
    return 0;
}