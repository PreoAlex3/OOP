#include "Loto.h"
class AgentieLoto
{
public:
	AgentieLoto();
	~AgentieLoto();
	void bilete();
private:
	int* reg_1;
	int* reg_2;
	int* reg_3;
	Loto numere;
	int nr;
	int* bilet;
};
