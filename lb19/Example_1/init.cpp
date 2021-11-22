#include "CMyPoint.h"

CMyPoint::CMyPoint(void) {
	x = y = 0;
}

int CMyPoint::GetX(void) { 
	return x; 
}

int CMyPoint::GetY(void) { 
	return y; 
}

void CMyPoint::SetXY(int nx, int ny) {
	x = nx;
	y = ny;
}

CPolygon::CPolygon(void){
	n = 0;
}

CMyPoint CPolygon::GetPoint(int index)
{
	return cp[index];
}

void CPolygon::SetPoint(int index, CMyPoint& pt)
{
	if (index >= n) return;
	cp[index] = pt;
}

void CPolygon::AddPoint(CMyPoint pt)
{
	if (n < 10) n++;
	else return;
	cp[n - 1] = pt;
}

double CPolygon::Length(void)
{
	double len, t;
	int x1, y1, x2, y2;
	len = 0;
	for (int i = 0; i < n - 1; i++)
	{
		x1 = cp[i].GetX();
		y1 = cp[i].GetY();
		x2 = cp[i + 1].GetX();
		y2 = cp[i + 1].GetY();
		t = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
		len += t;
	}
	return len;
}
