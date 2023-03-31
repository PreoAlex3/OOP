#pragma once
#include "CRectangle.h"
class CSquare: public CRectangle
{
public:
	CSquare();
	~CSquare();
protected:
	int side1;
	int side2;
	int x1, y1;
	int x2, y2;
	int x3, y3;
};