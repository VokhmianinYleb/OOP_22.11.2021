#include <iostream>
#include "Counts.h"
using namespace std;

// оголошення масиву, що ініціалізований статичними членами даних
int arCount1[] =
{
CCount1::count1,
CCount2::count2,
CCount3::count3
};

int main()
{
	// використання масиву arCount1
	int d;
	cout << "arCount1[0] = " << arCount1[0] << endl; //arCount1[0] = 0
	cout << "arCount1[1] = " << arCount1[1] << endl; //arCount1[1] = 5
	cout << "arCount1[2] = " << arCount1[2] << endl; //arCount1[2] = 100
	// змінити значення масиву arCount1[2] так,
	// щоб воно містило значення статичного члена класу CCount1
	arCount1[2] = CCount1::count1;
	cout << "arCount1[2] = " << arCount1[2] << endl; //arCount1[2] = 5
	// Оголошення локального масиву arCount2
	int arCount2[5];
	// заповнення масиву arCount2 деякими значеннями статичних членів
	arCount2[0] = CCount1::count1;
	arCount2[1] = CCount2::count2;
	cout << "arCount2[1] = " << arCount2[1] << endl; //arCount1[1] = 5
	system("pause");
	return 0;
}
