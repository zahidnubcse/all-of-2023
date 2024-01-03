#include <iostream>

using namespace std;

class Employee {
  public:
    string name;
    int id;
    string dept;
};

int main() {
  Employee Obj1;
  Obj1.name = "Simon";
  Obj1.id = 1811;
  Obj1.dept = "CSE";

  Employee Obj2;
  Obj2.name = "Rumman";
  Obj2.id = 1911;
  Obj2.dept = "CSE";

  cout << Obj1.name << " " << Obj1.id << " " << Obj1.dept << "\n";
  cout << Obj2.name << " " << Obj2.id << " " << Obj2.dept << "\n";
  return 0;
}
