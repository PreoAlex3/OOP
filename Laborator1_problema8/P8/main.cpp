#include <iostream>
#include "addition.h"
using namespace std;

int main()
{
	int u[100], v[100], x[100], y[100], length, m[100];
	cout << "Insert length of vectors:";
	cin >> length;
	cout << "Insert first vector:";
	read(u, length);
	cout << "Insert second vector:";
	read(v, length);
	cout << "Insert third vector:";
	read(x, length);
	cout << "Insert fourth vector:";
	read(y, length);
	cout << "First vector:";
	display(u, length);
	cout << "\nSecond vector:";
	display(v, length);
	cout << "\nThird vector:";
	display(x, length);
	cout << "\nFourth vector:";
	display(y, length);
	cout << "\n";

	cout << "2 vectors add:";
	add(length, m , u, v);
	display(m, length);
	cout << "\n3 vectors add:";
	add(length, m, u, v, x);
	display(m, length);
	cout << "\n4 vectors add:";
	add(length, m, u, v, x, y);
	display(m, length);

	return 0;
}