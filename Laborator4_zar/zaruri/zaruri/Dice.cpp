#include <iostream>
#include "Dice.h"
#include <ctime>
using namespace std;
Dice::Dice()
{
	face = 0;
}
Dice::~Dice()
{

}
void Dice::ThrowSimulate()
{
	face = rand() % 6 + 1;

}
void Dice::ThrowSimulate2()
{
	face = rand() % 2 + 1;
}
int Dice::Get()
{
	return face;
}