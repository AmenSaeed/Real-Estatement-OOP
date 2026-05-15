#include "Villa.h"

Villa::Villa(string ad, int f, int ar, int r, bool gard, bool grg, double prc) : Available(ad, prc, ar) {
    floors = f; rooms = r; hasGarden = gard; hasGarage = grg;
}

int Villa::get_floors() { return floors; }
int Villa::get_rooms() { return rooms; }
bool Villa::get_hasGarden() { return hasGarden; }
bool Villa::get_hasGarage() { return hasGarage; }

void Villa::display() {
    Available::display();
    cout << "Number of floors: " << floors << endl;
    cout << "Number of rooms: " << rooms << endl;
    cout << "Has garden: " << (hasGarden ? "Yes" : "No") << endl;
    cout << "Has garage: " << (hasGarage ? "Yes" : "No") << endl;
    cout << "------------------------------------" << endl;
}
