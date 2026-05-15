#pragma once
#include "Available.h"

class Land : public Available {
private:
    string landType;
    bool hasWaterAndElectricity;

public:
    Land();
    Land(string add, double area, string type, bool status, double tp);
    string get_landType();
    bool get_hasWaterAndElectricity();

    void setColor(int color);
    void display();
};
