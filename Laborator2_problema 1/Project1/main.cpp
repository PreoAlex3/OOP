#include <iostream>
#include <stdlib.h>
#include "AgentieLoto.h"
using namespace std;

int main()
{	
	srand(time(0));
	Loto ball;
	int* extras = new int[7];
	ball.generare(extras);
	ball.afisare(extras);
	cout << "\n";
	AgentieLoto bilete;
	bilete.bilete();
	return 0;
}