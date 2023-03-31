#pragma once
#include "CLine.h"
class CCircle : public CLine
{
public:
	CCircle();
	~CCircle();
	int Perimeter();
	void GetRadius();
protected:
	int radius;
};