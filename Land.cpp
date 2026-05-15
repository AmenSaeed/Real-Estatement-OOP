#include "Land.h"

Land::Land() : Available() {
    landType = "Not Specified";
    hasWaterAndElectricity = false;
}

Land::Land(string add, double area, string type, bool status, double tp) : Available(add, tp, area) {
    landType = type;
    hasWaterAndElectricity = status;
}

string Land::get_landType() { return landType; }
bool Land::get_hasWaterAndElectricity() { return hasWaterAndElectricity; }

void Land::display() {
    Available::display();
    cout << "Land Type: " << landType << endl;
    cout << "Infrastructure Status: " << (hasWaterAndElectricity ? "Available" : "Not Available") << endl;
    cout << "-------------------------------" << endl;
}
