#include <iostream>
#include <stdlib.h>
#include "AgentieLoto.h"
using namespace std;
Loto::Loto()
{
	extras = new int[7];
	status = new int[50];
	for (int i = 1; i <= 49; i++)
		status[i] = 0;
}
Loto::~Loto()
{
	delete[] extras;
	delete[] status;
}
void Loto::generare(int extras[])
{
	int random;
	for (int i = 1; i <= 6; i++)
	{
		random = rand() % 49 + 1;
		if (status[random] == 0)
		{
			status[random] = 1;
			extras[i] = random;
		}
		else
			i--;
	}
}
void Loto::afisare(int extras[])
{
	for (int i = 1; i <= 6; i++)
		cout << extras[i] <<" ";
	cout << "\n";
}
void Loto::SetStatus()
{
	for (int i = 1; i <= 49; i++)
		status[i] = 0;
}
int Loto::castig(int a[])
{
	generare(extras);
	for (int i = 1; i <= 6; i++) {		
		if (a[i] != extras[i])
			return 0;
	}
			
	return 1;
}