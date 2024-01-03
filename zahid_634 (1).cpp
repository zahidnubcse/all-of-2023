#include <iostream>
#include <string>

class Student {
public:
    string name;
    int id;
    string course;
    string section;

    void TakeStudentDetails() {
        cout << "Enter student details:\n";
        cout << "Name: ";
        getline(cin, name);
        cout << "ID: ";
        cin >> id;
        cin.ignore();
        cout << "Course: ";
        getline(cin, course);
        scout << "Section: ";
        getline(cin, section);
    }

    void ShowStudentDetails() {
        cout << "Student details:\n";
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Course: " << course << endl;
        cout << "Section: " << section << endl;
    }
};

int main() {
    Student student;

    student.TakeStudentDetails();
    cout << endl;

    student.ShowStudentDetails();

    return 0;
}
