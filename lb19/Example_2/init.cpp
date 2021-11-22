#include "CMyPoint.h"
#include <cmath>

CMyPoint::CMyPoint(void)
{
	x = y = 0;
}

int CMyPoint::GetX(void) {
	return x;
}

int CMyPoint::GetY(void) {
	return y;
}

void CMyPoint::SetXY(int x, int y)
{
	this->x = x;
	this->y = y;
}

CPolygon::CPolygon(void)
{
	n = 0;
	// виділення пам'яті-лише один раз
	for
		(int i = 0; i < 10; i++)
	{
		mp[i] = new CMyPoint;
	}
}

CMyPoint CPolygon::GetPoint(int index)
{
	return *mp[index];
}

void CPolygon::SetPoint(int index, CMyPoint& p)
{
	int x, y;
	x = p.GetX();
	y = p.GetY();
	mp[index]->SetXY(x, y);
}

void CPolygon::AddPoint(int x, int y)
{
	mp[n++]->SetXY(x, y);
}

double CPolygon::Length(void)
{
	double len, t;
	int x1, y1, x2, y2;
	len = 0;
	for (int i = 0; i < n - 1; i++)
	{
		x1 = mp[i]->GetX();
		y1 = mp[i]->GetY();
		x2 = mp[i + 1]->GetX();
		y2 = mp[i + 1]->GetY();
		t = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
		len = len + t;
	}
	return len;
}
