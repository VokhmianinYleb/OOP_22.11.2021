//main.cpp
#include <iostream>
#include "CMyPoint.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    // демонстрація використання класу CPolygon
    CPolygon p1;
    CMyPoint pt1;
    // сформувати ламану з координатами (1; 2), (3; 4), (5;6)
    pt1.SetXY(1, 2);
    p1.AddPoint(pt1);
    pt1.SetXY(3, 4);
    p1.AddPoint(pt1);
    pt1.SetXY(5, 6);
    p1.AddPoint(pt1);
    // перевірка
    int x, y;
    CMyPoint pt2;
    pt2 = p1.GetPoint(0);
    x = pt2.GetX(); // x = 1
    y = pt2.GetY(); // y = 2
    cout << "x = " << x << "; y = " << y << endl;
    pt2 = p1.GetPoint(1);
    x = pt2.GetX(); //x = 3
    y = pt2.GetY(); //y = 4
    cout << "x = " << x << "; y = " << y << endl;
    // довжина ламаної
    double d = p1.Length(); //d = 5.6568...
    cout << "Длина = " << d << endl;
    system("pause");
    return 0;
}
