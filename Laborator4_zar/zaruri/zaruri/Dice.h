#include <stdlib.h>
class Dice
{
public:
	Dice();
	~Dice();
	void ThrowSimulate();
	void ThrowSimulate2();
	int Get();
private:
	int face;
};