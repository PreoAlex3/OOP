#include <iostream>
#include "CCircle.h"
CCircle::CCircle() :
	radius(0)
{}
CCircle::~CCircle()
{}
void CCircle::GetRadius()
{
	radius = LineDimension();
}
int CCircle::Perimeter()
{
	return 2 * 3.14 * radius;
}