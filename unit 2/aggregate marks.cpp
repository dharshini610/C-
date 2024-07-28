#include <iostream>
using namespace std;
int main() {
    int marks[4]; 
    float total, aggregate;
    cout << "Enter marks for 4 subjects:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "Subject " << (i + 1) << ": ";
        cin >> marks[i];
    }
    total = 0;
    for (int i = 0; i < 4; i++) {
        total += marks[i];
    }
    aggregate = (total / 400.0) * 100;
    string grade;
    if (aggregate > 75) {
        grade = "Distinction";
    } else if (aggregate >= 60 && aggregate < 75) {
        grade = "First Division";
    } else if (aggregate >= 50 && aggregate < 60) {
        grade = "Second Division";
    } else if (aggregate >= 40 && aggregate < 50) {
        grade = "Third Division";
    } else {
        grade = "Fail";
    }
    cout << "Total marks: " << total << endl;
    cout << "Aggregate percentage: " << aggregate << "%" << endl;
    cout << "Grade: " << grade << endl;
    return 0;
}