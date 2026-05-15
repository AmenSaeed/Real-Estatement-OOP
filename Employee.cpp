#include "Employee.h"

Employee::Employee(string n, string d, string p, string a, int i, float s, float b) {
    name = n; department = d; position = p;
    address = a; id = i; salary = s; bonus = b;
}

void Employee::setEmployee(string n, string d, string p, string a, int i, float s, float b) {
    name = n; department = d; position = p;
    address = a; id = i; salary = s; bonus = b;
}

void Employee::setColor(int color) {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, color);
}


void Employee::display() {
    setColor(12);
    cout << " Employee Information " << endl;
    setColor(3);
    cout << "Name: " << name << endl;
    cout << "Department:" << department << endl;
    cout << "Position:" << position << endl;
    cout << "Address:" << address << endl;
    cout << "ID: " << id << endl;
    cout << "Salary: $" << salary << endl;
    cout << "Bonus:" << bonus << endl;
    setColor(15);
    cout << "------------------------------------" << endl;
}
