#include <iostream>
#include "CCircle.h"
#include "CSquare.h"
using namespace std;
int main()
{
	int perimeter;
	CCircle circle;
	CRectangle rectangle;
	CSquare square;

	circle.GetRadius();
	perimeter = circle.Perimeter();
	cout << "Perimeter of circle: " << perimeter << "\n";

	rectangle.GetSide();
	perimeter = rectangle.Perimeter();
	cout << "Perimeter of rectangle: " << perimeter << "\n";

	square.GetSide();
	perimeter = square.Perimeter();
	cout << "Perimeter of square: " << perimeter << "\n";
	return 0;
}