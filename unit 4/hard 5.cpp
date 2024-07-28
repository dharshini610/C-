#include <iostream>
#include <string>
using namespace std;
class Doctor {
    protected:
        string doctorName;
        string doctorateDegree;
    public:
        Doctor(string name, string degree) {
            doctorName = name;
            doctorateDegree = degree;
        }
        void displayDoctorInfo() {
            cout << "Doctor Name: " << doctorName << endl;
            cout << "Doctorate Degree: " << doctorateDegree << endl;
        }
};
class Patient {
    protected:
        string patientName;
        int bedNumber;
        string wardName;
    public:
        Patient(string name, int bed, string ward) {
            patientName = name;
            bedNumber = bed;
            wardName = ward;
        }
        void displayPatientInfo() {
            cout << "Patient Name: " << patientName << endl;
            cout << "Bed Number: " << bedNumber << endl;
            cout << "Ward Name: " << wardName << endl;
        }
}
class PatientDetails : public Patient, public Doctor {
    private:
        double dues;
    public:
        PatientDetails(string pname, int bed, string ward, string dname, string degree, double due)
            : Patient(pname, bed, ward), Doctor(dname, degree) {
            dues = due;
        }
        void displayPatientDetails() {
            displayPatientInfo();
            displayDoctorInfo();
            cout << "Dues of Patient: " << dues << endl;
        }
};
int main() {
    string patientName, doctorName, doctorateDegree, wardName;
    int bedNumber;
    double dues;
    cout << "Enter Data" << endl;
    cout << "Enter Patient Name: ";
    cin >> patientName;
    cout << "Enter Bed Number: ";
    cin >> bedNumber;
    cout << "Enter Ward Name: ";
    cin >> wardName;
    cout << "Enter the Doctor Name: ";
    cin >> doctorName;
    cout << "Enter Doctorate Degree: ";
    cin >> doctorateDegree;
    cout << "Enter Dues of Patient: ";
    cin >> dues;
    PatientDetails patientDetails(patientName, bedNumber, wardName, doctorName, doctorateDegree, dues);
    patientDetails.displayPatientDetails();
    return 0;
}