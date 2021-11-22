#include <cmath>
// клас описує точку на координатній площині
class CMyPoint
{
	int x, y;
public:
	// конструктор класу
	CMyPoint(void);
	// методи доступу
	int GetX(void);
	int GetY(void);
	void SetXY(int nx, int ny);
};

//Реалізація класу CPolygon
// клас, що описує ламану лінію
class CPolygon
{
	int n; // кількість точок
	CMyPoint cp[10]; // масив точок
public:
	// конструктор класу
	CPolygon(void);
	// методи доступу
	CMyPoint GetPoint(int index);
	// встановлює нове значення заданої точки
	void SetPoint(int index, CMyPoint& pt);
	// додає точку до ламаної
	void AddPoint(CMyPoint pt);
	// визначає довжину ламаної
	double Length(void);
};
