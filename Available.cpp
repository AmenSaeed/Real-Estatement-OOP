#include "Available.h"

int operator+(Available a1, Available a2) {
    int total = a1.get_totalPrice() + a2.get_totalPrice();
    return total;
}

Available::Available(string add, double pr, double ar) {
    if (pr <= 0)
        throw 1;
    address = add;
    price = pr;
    area = ar;
}

Available::Available() {
    address = "Unknown";
    price = 0;
    area = 0;
}

void Available::setColor(int color) {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, color);
}

void Available::display() {
    setColor(3);
    cout << "Address: " << address << endl;
    cout << "Area: " << area << "m" << endl;
    cout << "Price: " << (price / 1000000) << "M EGP" << endl;
}

string Available::get_address() { return address; }
double Available::get_totalArea() { return area; }
double Available::get_totalPrice() { return price; }
