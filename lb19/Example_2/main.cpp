//main.cpp
#include <iostream>
#include "CMyPoint.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    // демонстрація використання масиву unmanaged-покажчиків на об'єкт класу
    CPolygon cp; // об'єкт класу
    // сформувати ламану з трьох точок
    cp.AddPoint(1, 2);
    cp.AddPoint(3, 4);
    cp.AddPoint(5, 6);
    // перевірка
    int x, y;
    CMyPoint mp;
    mp = cp.GetPoint(0);
    x = mp.GetX(); // x = 1
    y = mp.GetY(); // y = 2
    cout << "x = " << x << "; y = " << y << endl;
    // визначення довжини ламаної
    double d;
    d = cp.Length(); // d = 5.6568...
    cout << "Длина = " << d << endl;
    system("pause");
    return 0;
}
