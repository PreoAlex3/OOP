#pragma once
#include "CPoint.h"
class CLine : public CPoint
{
public:
	CLine();
	~CLine();
	int Lenght(int x1, int y1, int x2, int y2);
	int LineDimension();
protected:
	int length;
	int x1;
	int y1;
	int x2;
	int y2;
};
