#pragma once
#include "CLine.h"
class CRectangle : public CLine
{
public:
	CRectangle();
	~CRectangle();
	int Perimeter();
	virtual void GetSide();
protected:
	int side1;
	int side2;
	int x1, y1;
	int x2, y2;
	int x3, y3;
};