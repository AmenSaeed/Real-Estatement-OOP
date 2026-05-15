#include "Employee.h"

Employee::Employee(string n, string d, string p, string a, int i, float s, float b) {
    name = n; department = d; position = p;
    address = a; id = i; salary = s; bonus = b;
}

void Employee::setEmployee(string n, string d, string p, string a, int i, float s, float b) {
    name = n; department = d; position = p;
    address = a; id = i; salary = s; bonus = b;
}

void Employee::display() {
    cout << " Employee Information " << endl;
    cout << "Name: " << name << endl;
    cout << "Department:" << department << endl;
    cout << "Position:" << position << endl;
    cout << "Address:" << address << endl;
    cout << "ID: " << id << endl;
    cout << "Salary: $" << salary << endl;
    cout << "Bonus:" << bonus << endl;
    cout << "------------------------------------" << endl;
}
