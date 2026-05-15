#include "Apartment.h"

Apartment::Apartment() : Available() { floor = 0; }

Apartment::Apartment(string addr, double tp, double a, int f) : Available(addr, tp, a) {
    floor = f;
}

int Apartment::getFloor() { return floor; }

void Apartment::setColor(int color) {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, color);
}

void Apartment::display() {
    Available::display();
    cout << "Floor: " << floor << endl;
    setColor(15);
    cout << "________________________________________\n";
}
