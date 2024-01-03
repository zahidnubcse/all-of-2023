#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    string id;
    string semester;
    string course;
    float cgpa;

public:
    Student(string name, string id, string semester, string course, float cgpa)
    {
        this->name = name;
        this->id = id;
        this->semester = semester;
        this->course = course;
        this->cgpa = cgpa;
    }

    void studentDetails()
    {
        if (course == "CSE")
        {
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
            cout << "Semester: " << semester << endl;

        }
        else if (course == "ECSE")
        {
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
            cout << "Semester: " << semester << endl;
            cout << "CGPA: " << cgpa << endl;
        }
    }
};

int main()
{

    Student cseStudent("Zahid Hasan", "634", "Summer 2023", "CSE", 3.25);
    cout << "CSE Student Details:" << endl;
    cseStudent.studentDetails();
    cout << endl;


    Student ecseStudent("karim", "321", "summer 2023", "ECSE", 3.5);
    cout << "ECSE Student Details:" << endl;
    ecseStudent.studentDetails();

    return 0;
}
