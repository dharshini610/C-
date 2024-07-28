#include <iostream>
#include <string>
using namespace std;
class Employee {
    protected:
        int employeeID;
        string employeeName;
    public:
        Employee(int id, string name) {
            employeeID = id;
            employeeName = name;
        }
        void displayEmployeeInfo() {
            cout << "Employee ID: " << employeeID << endl;
            cout << "Employee Name: " << employeeName << endl;
        }
};

// Base class: Salary
class Salary {
    protected:
        double basicSalary;
    public:
        Salary(double salary) {
            basicSalary = salary;
        }
        double getBasicSalary() {
            return basicSalary;
        }
};

// Derived class: GrossSalary (inherits from Salary)
class GrossSalary : public Salary {
    private:
        double hra;
        double da;
    public:
        GrossSalary(double salary) : Salary(salary) {
            hra = 0.1 * salary;
            da = 0.2 * salary;
        }
        double getGrossSalary() {
            return getBasicSalary() + hra + da;
        }
};

// Derived class: NetSalary (inherits from GrossSalary and Employee)
class NetSalary : public GrossSalary, public Employee {
    private:
        double pf;
    public:
        NetSalary(int id, string name, double salary) : Employee(id, name), GrossSalary(salary) {
            pf = 0.05 * getGrossSalary();
        }
        double getNetSalary() {
            return getGrossSalary() - pf;
        }
        void displaySalaryInfo() {
            displayEmployeeInfo();
            cout << "Gross Salary = Rs." << getGrossSalary() << endl;
            cout << "Net Salary = Rs." << getNetSalary() << endl;
        }
};

int main() {
    int employeeID;
    string employeeName;
    double basicSalary;
    cout << "Enter Employee ID: ";
    cin >> employeeID;
    cout << "Enter Employee Name: ";
    cin >> employeeName;
    cout << "Enter basic salary of Employee: ";
    cin >> basicSalary;
    NetSalary employee(employeeID, employeeName, basicSalary);
    employee.displaySalaryInfo();
    return 0;
}