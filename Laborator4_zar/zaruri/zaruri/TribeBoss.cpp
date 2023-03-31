#include <iostream>
#include "TribeBoss.h"
using namespace std;
TribeBoss::TribeBoss()
{
	members = 0;
	for (int i = 1; i <= members; i++)
	{
		vote[i] = 0;
	}
	for (int i = 1; i <= 6; i++)
	{
		candidates[i] = 0;
	}
	vote_numbers = 0;
}
TribeBoss::~TribeBoss()
{

}
void TribeBoss::GetMembersNumber(int number)
{
	members = number;
}
void TribeBoss::VoteNumbers()
{
	for (int i = 1; i <= members; i++)
	{
		cout << "number of votes for " << i << " member:";
		cin >> vote[i];
	}
	cout << "\n";
}
void TribeBoss::Election()
{
	int choise;
	for (int i = 1; i <= members; i++)
	{
		cout << i << " member choise: ";
		for (int j = 1; j <= vote[i]; j++)
		{
			tribe.ThrowSimulate();
			choise = tribe.Get();
			cout << choise << " ";
			candidates[choise]++;
			vote_numbers++;
		}
		cout << "\n";
	}
	cout << "\n";
	for (int i = 1; i <= 6; i++)
	{
		cout<< i <<" candidate votes: " << candidates[i] << "\n";
	}
	cout << "\n";
}
void TribeBoss::Winner()
{
	int max1 = candidates[1], max2 = 0, candidate_max1 = 1, candidate_max2 = 0;
	for (int i = 2; i <= 6; i++) 
	{
		if (candidates[i] >= max1)
		{
			max2 = max1;
			candidate_max2 = candidate_max1;
			max1 = candidates[i];
			candidate_max1 = i;
		}
		else
			if (candidates[i] > max2)
			{
				max2 = candidates[i];
				candidate_max2 = i;
			}
				
	}
	if (max1 >= vote_numbers / 2 + 1)
		cout << "\nthe boss is: " << candidate_max1 << "\n";
	else
	{
		cout << "\nthe second tour: \n";
		int choise;
		for (int i = 1; i <= 6; i++)
		{
			candidates[i] = 0;
		}
		for (int i = 1; i <= members; i++)
		{
			cout << i << " member choise: ";
			for (int j = 1; j <= vote[i]; j++)
			{
				tribe.ThrowSimulate2();
				choise = tribe.Get();
				if(choise==1)
				{
					cout << candidate_max1 << " ";
					candidates[candidate_max1]++;
				}
					
				else
				{
					cout << candidate_max2 << " ";
					candidates[candidate_max2]++;
				}
					
			}
			cout << "\n";
		}
		cout << "\n";
		for (int i = 1; i <= 6; i++)
		{
			if(i==candidate_max1 || i==candidate_max2)
			cout << i << " candidate votes: " << candidates[i] << "\n";
		}
		cout << "\nafter the second tour the boss is: ";
		if (candidates[candidate_max1] > candidates[candidate_max2])
			cout << candidate_max1 << "\n";
		else
			cout << candidate_max2 << "\n";
	}

}