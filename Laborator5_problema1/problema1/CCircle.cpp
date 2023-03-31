#include <iostream>
#include "CCircle.h"
CCircle::CCircle():
	radius(0)
{}
CCircle::~CCircle()
{}
void CCircle::GetRadius()
{
	radius = LineDimension();
}
int CCircle::AreaCircle()
{
	return 3.14 * radius * radius;
}
int CCircle::PerimeterCircle()
{
	return 2 * 3.14 * radius;
}