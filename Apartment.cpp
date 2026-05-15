#include "Apartment.h"

Apartment::Apartment() : Available() { floor = 0; }

Apartment::Apartment(string addr, double tp, double a, int f) : Available(addr, tp, a) {
    floor = f;
}

int Apartment::getFloor() { return floor; }

void Apartment::display() {
    Available::display();
    cout << "Floor: " << floor << endl;
    cout << "________________________________________\n";
}
