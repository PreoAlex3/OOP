#pragma once
#include "CRectangle.h"
class CSquare : public CRectangle
{
public:
	CSquare();
	~CSquare();
	void GetSide();
	int Perimeter();
protected:
	int side1;
	int x1, y1;
	int x2, y2;
};