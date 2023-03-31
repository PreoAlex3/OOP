#include "loto.h"
using namespace std;
NrLoto::NrLoto()
{
	for (int i = 1; i <= 49; i++)
		status[i] = 0;
}
NrLoto::~NrLoto()
{

}
void NrLoto::generare()
{
	int random;
	srand(time(0));
	for (int i = 1; i <= 6; i++)
	{
		random = rand() % 49 + 1;
		if (status[random] == 0)
		{
			status[random] = 1;
			cout << random << " ";
		}
		else
			i--;
	}
}
