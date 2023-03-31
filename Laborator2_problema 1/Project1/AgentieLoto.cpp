#include <iostream>
#include "AgentieLoto.h"
using namespace std;

AgentieLoto::AgentieLoto()
{
	reg_1 = new int[7];
	reg_2 = new int[7];
	reg_3 = new int[7];
	cout << "Bilet number: ";
	cin >> nr;
	bilet = new int[nr + 1];
	for (int i = 1; i <= nr; i++)
		bilet[i] = 0;
}

AgentieLoto::~AgentieLoto()
{
	delete[] reg_1;
	delete[] reg_2;
	delete[] reg_3;
	delete[] bilet;
}
void AgentieLoto::bilete()
{
	int ok = 0;
	for(int i=1; i<= nr; i++)
	{
		cout << "\nbiletul: " << i;
		numere.SetStatus();
		numere.generare(reg_1);
		numere.generare(reg_2);
		numere.generare(reg_3);
		cout << "\n";
		numere.afisare(reg_1);
		numere.afisare(reg_2);
		numere.afisare(reg_3);
		if (numere.castig(reg_1) || numere.castig(reg_2) || numere.castig(reg_3))
		{
			bilet[i] = 1;
			ok = 1;
		}
			
	}
	if (ok)
	{
		cout << "\nBilete castigatoare: ";
		for (int i = 1; i <= nr; i++)
			if (bilet[i])
				cout << i << " ";
		cout << endl;
	}
	else
		cout << "\nNu sunt bilete castigatoare" << endl;
}