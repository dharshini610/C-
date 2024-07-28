#include <iostream>
#include <string>
using namespace std;
class StudentInfo {
protected:
    string name;
    int age;
    char gender;
public:
    void readInfo() {
        cout << "Enter student's basic information:" << endl;
        cout << "Name?: ";
        cin >> name;
        cout << "Age?: ";
        cin >> age;
        cout << "Gender?: ";
        cin >> gender;
    }
    void printInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};
class StudentResult : public StudentInfo {
private:
    int totalMarks;
    char grade;
public:
    void readResult() {
        cout << "Enter student's result information:" << endl;
        cout << "Total Marks?: ";
        cin >> totalMarks;
        cout << "Grade?: ";
        cin >> grade;
    }
    void printResult() {
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Grade: " << grade << endl;
    }
};
int main() {
    StudentResult student;
    student.readInfo();
    student.readResult();
    cout << "\nStudent Information:" << endl;
    student.printInfo();
    student.printResult();
    return 0;
}