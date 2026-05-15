#pragma once
#include "Available.h"

class Apartment : public Available {
private:
    int floor;

public:
    Apartment();
    Apartment(string addr, double tp, double a, int f);
    int getFloor();
    void setColor(int color);
    void display();
};
