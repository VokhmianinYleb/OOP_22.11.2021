#include <iostream>
#include "CPi.h"
using namespace std;

int* pZ; // зовнішній покажчик на int
int main()
{
	double d;
	CPi obj; // об'єкт класу
	double* pPi; // покажчик на double
	double* pExp; // покажчик на double
	// покажчик вказує на статичний член даних об'єкту obj класу CPi
	pPi = &obj.Pi;
	pExp = &::Exp; // вказує на статичний член даних Exp - інший вид доступу через ::
	// перевірка
	d = obj.Pi; // d = 3.14159
	cout << d << endl;
	d = Exp; // d = 2.71828
	cout << d << endl;
	d = ::Exp; // d = 2.71828 - так теж можна
	cout << d << endl;
	d = *pPi; // d = 3.14159
	cout << d << endl;
	// зовнішній покажчик на int
	pZ = &ZeroI;
	d = *pZ; // d = 0
	cout << d << endl;
	* pZ = 5;
	d = ZeroI; // d = 5
	cout << d << endl;
	system("pause");
	return 0;
}
