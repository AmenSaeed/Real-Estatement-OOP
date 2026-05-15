#pragma once
#include <string>
#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    string department;
    string position;
    string address;
    int id;
    float salary;
    float bonus;

public:
    Employee(string n, string d, string p, string a, int i, float s, float b);
    void setEmployee(string n, string d, string p, string a, int i, float s, float b);
    void display();
};
