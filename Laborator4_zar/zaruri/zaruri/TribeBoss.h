#include <stdlib.h>
#include "Dice.h"
class TribeBoss
{
public:
	TribeBoss();
	~TribeBoss();
	void GetMembersNumber(int number);
	void VoteNumbers();
	void Election();
	void Winner();
private:
	int members;
	int vote[100];
	int candidates[7];
	int vote_numbers;
	Dice tribe;
};
