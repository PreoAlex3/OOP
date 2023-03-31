#include <iostream>
#include <fstream>
#include "CPoint.h"
using namespace std;
ifstream fin("stock.txt");
CPoint::CPoint():
	x(0),
	y(0)
{}
CPoint::CPoint(int x,int y) 
{
	this->x = x;
	this->y = y;
}
CPoint::~CPoint()
{
	fin.close();
}
void CPoint::Read()
{
	fin >> x;
	fin >> y;

}