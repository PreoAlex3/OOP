#include <iostream>
#include "CRectangle.h"
CRectangle::CRectangle():
	side1(0),
	side2(0),
	x1(0),
	x2(0),
	x3(0),
	y1(0),
	y2(0),
	y3(0)
{}
CRectangle::~CRectangle()
{}
void CRectangle::GetSide()
{
	Read();
	x1 = x;
	y1 = y;
	Read();
	x2 = x;
	y2 = y;
	Read();
	x3 = x;
	y3 = y;
	side1 = Lenght(x1, y1, x2, y2);
	side2 = Lenght(x2, y2, x3, y3);
}
int CRectangle::AreaRectangle()
{
	return 2 * (side1 + side2);
}
int CRectangle::PerimeterRectangle()
{
	return side1 * side2;
}