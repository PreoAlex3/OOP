#include <iostream>
#include "addition.h"
using namespace std;
void add(int lenght, int m[], int a[], int b[], int c[], int d[])
{
	if(c == nullptr)
		for (int i = 0; i < lenght; i++)
			m[i] = a[i] + b[i];
	else
	if(d == nullptr)
		for (int i = 0; i < lenght; i++)
			m[i] = a[i] + b[i] + c[i];
	else
		for (int i = 0; i < lenght; i++)
			m[i] = a[i] + b[i] + c[i] + d[i];
}
void read(int a[ ],int length)
{
	for (int i = 0; i < length; i++)
	{
		cin >> a[i];
	}
}
void display(int a[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << a[i] << " ";
	}
}