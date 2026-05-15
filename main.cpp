#include <iostream>
#include <windows.h>
#include "Employee.h"
#include "Soldproperty.h"
#include "Apartment.h"
#include "Villa.h"
#include "Land.h"
using namespace std;

void setColor(int color) {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, color);
}

int main() {
    try {
        Apartment A1[2] = {
            Apartment("6 OfOctober-FirstDistrict", 15000000, 250, 4),
            Apartment("HadayekElahram-Aldiyaralasrea", 15000000, 150, 2)
        };
        Villa V1[2] = {
            Villa("Beverly Hills - Sheikh Zayed", 2, 205, 5, true, false, 10000000),
            Villa("Marassi - North Coast", 3, 400, 7, true, true, 25000000)
        };
        Land L1[2] = {
            Land("Cairo - Nasr City", 200, "Residential", true, 25000000),
            Land("New Cairo - Fifth Settlement", 350, "Commercial", true, 40000000)
        };

        Soldproperty SP1("villa", "12/12/2007", 100000, "Adel");
        Employee E1("Ahmed", "HR", "Manager", "Cairo", 101, 5000, 500);

        while (true) {
            setColor(3);
            cout << "________________________________" << endl;
            cout << "|"; setColor(14); cout << "     REAL ESTATE SYSTEM       "; setColor(3); cout << "|" << endl;
            cout << "|                              |" << endl;
            cout << "|"; setColor(10); cout << "   [1] Employees Info         "; setColor(3); cout << "|" << endl;
            cout << "|"; setColor(11); cout << "   [2] Sold Property          "; setColor(3); cout << "|" << endl;
            cout << "|"; setColor(13); cout << "   [3] Available Property     "; setColor(3); cout << "|" << endl;
            cout << "|"; setColor(12); cout << "   [4] Exit                   "; setColor(3); cout << "|" << endl;
            cout << "|                              |" << endl;
            cout << "|______________________________|" << endl;
            cout << "|"; setColor(15); cout << "   Enter the num of menu :    "; setColor(3); cout << "|" << endl;
            cout << "|______________________________|" << endl;

            setColor(15);
            int x; cin >> x;

            if (x == 1) {
                E1.display();
            } else if (x == 2) {
                setColor(12);
                cout << "Sold Property: " << endl;
                SP1.display();
            } else if (x == 3) {
                while (true) {
                    setColor(3);
                    cout << "________________________________" << endl;
                    setColor(14); cout << "|     REAL ESTATE SYSTEM       |" << endl;
                    setColor(3);  cout << "|                              |" << endl;
                    setColor(10); cout << "|   [1] Villas                 |" << endl;
                    setColor(11); cout << "|   [2] Apartments             |" << endl;
                    setColor(13); cout << "|   [3] Lands                  |" << endl;
                    setColor(12); cout << "|   [4] Back                   |" << endl;
                    setColor(3);  cout << "|______________________________|" << endl;

                    setColor(15);
                    int q; cin >> q;

                    if (q == 1) {
                        int total = 0;
                        V1[0].display(); V1[1].display();
                        total = V1[0] + V1[1];
                        cout << "Total price for Villas: " << (total / 1000000) << "M EGP" << endl;
                        cout << "------------------------------------" << endl;
                    } else if (q == 2) {
                        int total = 0;
                        A1[0].display(); A1[1].display();
                        total = A1[0] + A1[1];
                        cout << "Total price for Apartments: " << (total / 1000000) << "M EGP" << endl;
                        cout << "------------------------------------" << endl;
                    } else if (q == 3) {
                        int total = 0;
                        L1[0].display(); L1[1].display();
                        total = L1[0] + L1[1];
                        cout << "Total price for Lands: " << (total / 1000000) << "M EGP" << endl;
                        cout << "------------------------------------" << endl;
                    } else if (q == 4) {
                        break;
                    }
                }
            } else if (x == 4) {
                break;
            }
        }
    } catch (int x) {
        setColor(12);
        cout << "Price Error" << endl;
    }

    return 0;
}
