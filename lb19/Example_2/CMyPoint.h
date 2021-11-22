class CMyPoint {
	int x, y;
public:
	// конструктор
	CMyPoint(void);
	// методи доступу
	int GetX(void);
	int GetY(void);
	void SetXY(int x, int y);
};

// клас, що описує ламану лінію
class CPolygon {
	int n;
	CMyPoint* mp[10]; // масив покажчиків на CMyPoint
public:
	// конструктор
	CPolygon(void);
	// методи доступу
	CMyPoint GetPoint(int index);
	void SetPoint(int index, CMyPoint& p);
	// додати нову точку
	void AddPoint(int x, int y);
	// обчислення довжини ламаної
	double Length(void);
};
