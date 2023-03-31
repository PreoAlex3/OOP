#pragma once
class CPoint
{
public:
	CPoint();
	CPoint(int x, int y);
	~CPoint();
	void Read();
protected:
	int x;
	int y;
};
