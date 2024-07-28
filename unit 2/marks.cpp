#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int regNo;
    int mark1, mark2, mark3;
    float average;
    char grade;
public:
    Student() {}
    void readStudentDetails() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter registration number: ";
        cin >> regNo;
        cout << "Enter mark 1: ";
        cin >> mark1;
        cout << "Enter mark 2: ";
        cin >> mark2;
        cout << "Enter mark 3: ";
        cin >> mark3;
    }
    void calculateAverage() {
        average = (mark1 + mark2 + mark3) / 3.0;
    }
    void determineGrade() {
        if (average > 90) {
            grade = 'S';
        } else if (average > 80) {
            grade = 'A';
        } else if (average > 70) {
            grade = 'C';
        } else if (average > 60) {
            grade = 'D';
        } else if (average > 50) {
            grade = 'E';
        } else {
            grade = 'F';
        }
    }
    void displayStudentRecord() {
        cout << "Name: " << name << endl;
        cout << "Registration Number: " << regNo << endl;
        cout << "Average Marks: " << average << endl;
        cout << "Grade: " << grade << endl;
        cout << "------------------------" << endl;
    }
};
int main() {
    Student students[10]; 
    for (int i = 0; i < 10; i++) {
        cout << "Enter details for student " << (i + 1) << ":" << endl;
        students[i].readStudentDetails();
        students[i].calculateAverage();
        students[i].determineGrade();
    }
    for (int i = 0; i < 10; i++) {
        students[i].displayStudentRecord();
    }
    return 0;
}