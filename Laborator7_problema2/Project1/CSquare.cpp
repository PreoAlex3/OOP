#include <iostream>
#include "CSquare.h"
CSquare::CSquare() :
	side1(0),
	x1(0),
	x2(0),
	y1(0),
	y2(0)
{}
CSquare::~CSquare()
{}
void CSquare::GetSide()
{
	Read();
	x1 = x;
	y1 = y;
	Read();
	x2 = x;
	y2 = y;
	side1 = Lenght(x1, y1, x2, y2);
}
int CSquare::Perimeter()
{
	return 4 * side1;
}