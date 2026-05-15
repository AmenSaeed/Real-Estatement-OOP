#include "Soldproperty.h"

Soldproperty::Soldproperty(string ty, string da, double pr, string sb) {
    type = ty; date = da; price = pr; soldby = sb;
}

string Soldproperty::get_type() { return type; }
string Soldproperty::get_date() { return date; }
double Soldproperty::get_Price() { return price; }
string Soldproperty::get_soldby() { return soldby; }

void Soldproperty::setColor(int color) {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, color);
}

void Soldproperty::display() {
    setColor(11);
    cout << "Type: " << type << endl;
    cout << "Date: " << date << endl;
    cout << "Price: " << price << endl;
    cout << "sold by: " << soldby << endl;
    setColor(15);
    cout << "------------------------------------" << endl;
}
