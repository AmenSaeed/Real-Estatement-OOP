#pragma once
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Available {
private:
    string address;
    double price;
    double area;

public:
    friend int operator+(Available a1, Available a2);

    Available(string add, double pr, double ar);
    Available();

    void setColor(int color);
    void display();

    string get_address();
    double get_totalArea();
    double get_totalPrice();
};
