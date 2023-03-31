#include <iostream>
#include "CLine.h"
using namespace std;
CLine::CLine() :
	length(0),
	x1(0),
	y1(0),
	x2(0),
	y2(0)
{}
CLine::~CLine()
{}
int CLine::LineDimension()
{
	int a;
	Read();
	x1 = x;
	y1 = y;
	Read();
	x2 = x;
	y2 = y;
	a = Lenght(x1, y1, x2, y2);
	return a;
}
int CLine::Lenght(int x1, int y1, int x2, int y2)
{
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}