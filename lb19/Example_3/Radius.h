// клас, що реалізує величину радіуса деякої геометричної фігури
class Radius
{
	double radius; // змінна, що визначає радіус
	// внутрішній метод, що формує значення змінних length, area, volume
	void CalcValues(void);
public:
	double length; // довжина кола
	double area; // площа круга
	double volume; // об'єм кулі
	// конструктори
	Radius();
	Radius(double radius);
	// методи доступу
	int GetR(void);
	void SetR(double radius);
};
