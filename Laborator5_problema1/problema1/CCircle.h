#pragma once
#include "CLine.h"
class CCircle: public CLine
{
public:
	CCircle();
	~CCircle();
	int AreaCircle();
	int PerimeterCircle();
	void GetRadius();
protected:
	int radius;
};