#include <iostream>
#include "TribeBoss.h"
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	Dice dice1;
	Dice dice2;
	int d1, d2, appearance[7][7], max = 0, prev_cont = 0, prev_d1, prev_d2, prev_nr = 1, cons_d1, cons_d2, prev_1, prev_2, frequency[7];


	for (int i = 1; i <= 6; i++)
		for (int j = 1; j <= 6; j++)
			appearance[i][j] = 0;

	for (int i = 1; i <= 6; i++)
		frequency[i] = 0;

	dice1.ThrowSimulate();
	d1 = dice1.Get();
	cout << d1 << " ";
	dice2.ThrowSimulate();
	d2 = dice2.Get();
	cout << d2 << " ";
	appearance[d1][d2]++;
	prev_1 = prev_d1 = d1;
	prev_2 = prev_d2 = d2;
	prev_cont = 1;
	cout << "\n";
	frequency[d1]++;
	frequency[d2]++;
	for (int i = 0; i <= 8998; i++)
	{
			dice1.ThrowSimulate();
			d1 = dice1.Get();
			cout << d1 << " ";
			dice2.ThrowSimulate();
			d2 = dice2.Get();
			cout << d2 << " ";
			frequency[d1]++;
			frequency[d2]++;
			appearance[d1][d2]++;

			if (appearance[d1][d2] > max)
				max = appearance[d1][d2];
			cout << "\n";
			
			if (prev_d1 == d1 && prev_d2 == d2) {
				prev_nr++;
				if (prev_nr > prev_cont) 
				{
					prev_cont = prev_nr;
					prev_1 = d1;
					prev_2 = d2;
				}
			}
			else
			{
				prev_nr = 1;
			}
			prev_d1 = d1;
			prev_d2 = d2;


	}
	for (int i = 1; i <= 6; i++) 
	{
		for (int j = 1; j <= 6; j++)
		{
			cout << appearance[i][j] << " ";
		}
		cout << "\n";	
	}
	cout << "\nmost appearances: \n";
	for (int i = 1; i <= 6; i++)
		for (int j = 1; j <= 6; j++)
		{
			if (appearance[i][j] == max)
				cout << "pair: " << i << " " << j << "\n";
		}
		cout << "\n";
	cout << "number consecutive ap: " << prev_cont << "\n";
	cout << "pair:" << prev_1 << " " << prev_2 << "\n\n";
	
	int min = appearance[1][1];
	for (int i = 1; i <= 6; i++)
		for (int j = 1; j <= 6; j++)
		{
			if (min > appearance[i][j])
				min = appearance[i][j];
		}
	cout << "less apparition:\n";
	for (int i = 1; i <= 6; i++)
		for (int j = 1; j <= 6; j++)
		{
			if (appearance[i][j] == min)
				cout << "pair: " << i << " " << j << "\n";
		}
	cout << "\n";

	for (int i = 1; i <= 6; i++)
		cout << "face " << i << " appear: " << frequency[i] << "\n";

	//lab 4
	cout << "\n\n";
	TribeBoss choise;
	cout << "number of members: ";
	int number;
	cin >> number;
	choise.GetMembersNumber(number);
	choise.VoteNumbers();
	choise.Election();
	choise.Winner();
}