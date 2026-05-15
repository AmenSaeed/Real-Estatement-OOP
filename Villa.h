#pragma once
#include "Available.h"

class Villa : public Available {
private:
    int floors;
    int rooms;
    bool hasGarden;
    bool hasGarage;

public:
    Villa(string ad, int f, int ar, int r, bool gard, bool grg, double prc);
    int get_floors();
    int get_rooms();
    bool get_hasGarden();
    bool get_hasGarage();
    void display();
};
