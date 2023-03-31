#pragma once
class CPoint
{
public:
	CPoint();
	CPoint(int x, int y);
	~CPoint();
	void Read();
	virtual int Perimeter() = 0;
protected:
	int x;
	int y;
};
