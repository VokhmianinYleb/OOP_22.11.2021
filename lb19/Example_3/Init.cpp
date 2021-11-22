#include "Radius.h"

void Radius::CalcValues(void)
{
	const double pi = 3.141592653589;
	length = 2 * pi * radius;
	area = pi * radius * radius;
	volume = 4.0 / 3.0 * pi * radius * radius * radius;
}

Radius::Radius()
{
	radius = 1;
	CalcValues(); // заповнити змінні length, area, volume
}

Radius::Radius(double radius)
{
	this->radius = radius;
	CalcValues(); // заповнити змінні length, area, volume
}

// методи доступу
int Radius::GetR(void) { 
	return radius; 
}

void Radius::SetR(double radius)
{
	this->radius = radius;
	CalcValues(); // заповнити змінні length, area, volume
}
