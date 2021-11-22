//main.cpp
#include <iostream>
#include "Radius.h"
using namespace std;

int main() {
    setlocale(0, "ukr");
    Radius r(3); // об'єкт r класу Radius
    // ініціалізація масиву V значеннями, що є членами даних об'єкту r
    double V[] = {
        r.length,
        r.area,
        r.volume
    };
    cout << "Довжина кола - " << V[0] << endl; // V[0] = 18.8496 - довжина кола
    cout << "Площа круга - " << V[1] << endl; // V[1] = 28.2743 - площа круга
    cout << "Об'єм кулі - " << V[2] << endl; // V[2] = 113.097 - об'єм кулі
    system("pause");
    return 0;
}
