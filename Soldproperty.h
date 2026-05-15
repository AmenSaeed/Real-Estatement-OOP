#pragma once
#include <string>
#include <iostream>
using namespace std;

class Soldproperty {
private:
    string type;
    string date;
    double price;
    string soldby;

public:
    Soldproperty(string ty, string da, double pr, string sb);
    string get_type();
    string get_date();
    double get_Price();
    string get_soldby();
    void setColor(int color);
    void display();
};
