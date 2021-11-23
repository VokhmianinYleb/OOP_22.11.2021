#include <iostream>
#include "Counts.h"
using namespace std;

// оголошення глобального масиву покажчиків на статичні члени даних
int* arPCount1[] =
{
&CCount1::count1,
&CCount2::count2,
&CCount3::count3
};

int main()
{
	// використання масиву покажчиків arPCount1
	cout << "*arPCount1[0] = " << *arPCount1[0] << endl; // = 0
	cout << "*arPCount1[1] = " << *arPCount1[1] << endl; // = 5
	// змінити значення масиву покажчиків arPCount1[2] так,
	// щоб він вказував на статичний член класу CCount2
	arPCount1[2] = &CCount2::count2;
	cout << "*arPCount1[2] = " << *arPCount1[2] << endl; // = 100
	// Оголошення локального масиву arPCount2
	int* arPCount2[5];
	// заповнення масиву arPCount2 деякими значеннями та їх використання
	arPCount2[0] = &CCount1::count1;
	arPCount2[1] = &CCount3::count3;
	cout << "*arPCount2[1] = " << *arPCount2[1] << endl; // = 100
	system("pause");
	return 0;
}
