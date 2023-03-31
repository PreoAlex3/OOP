#include <iostream>
#include "CCircle.h"
#include "CSquare.h"
using namespace std;
int main()
{
	int area, perimeter;
	CCircle circle;
	CRectangle rectangle;
	CSquare square;

	circle.GetRadius();
	area = circle.AreaCircle();
	perimeter = circle.PerimeterCircle();
	cout<<"Area of circle: " << area << "\nPerimeter of circle: " << perimeter << "\n";

	rectangle.GetSide();
	area = rectangle.AreaRectangle();
	perimeter = rectangle.PerimeterRectangle();
	cout << "\nArea of rectangle: " << area << "\nPerimeter of rectangle: " << perimeter << "\n";
	
	square.GetSide();
	area = square.AreaRectangle();
	perimeter = square.PerimeterRectangle();
	cout << "\nArea of square: " << area << "\nPerimeter of square: " << perimeter << "\n";
	return 0;
}