#include "Land.h"

Land::Land() : Available() {
    landType = "Not Specified";
    hasWaterAndElectricity = false;
}

Land::Land(string add, double area, string type, bool status, double tp) : Available(add, tp, area) {
    landType = type;
    hasWaterAndElectricity = status;
}

Land::Land() {
    landType = "Not Specified";
    hasWaterAndElectricity = false;
}

string Land::get_landType() { return landType; }
bool Land::get_hasWaterAndElectricity() { return hasWaterAndElectricity; }

void Land::setColor(int color) {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, color);
}

void Land::display() {
    Available::display();
    cout << "Land Type: " << landType << endl;
    cout << "Infrastructure Status: " << (hasWaterAndElectricity ? "Available" : "Not Available") << endl;
    setColor(15);
    cout << "-------------------------------" << endl;
}
