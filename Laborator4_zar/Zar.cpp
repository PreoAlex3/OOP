#include "Zar.h"

CZar::CZar(void)// :
    //fata(0)
{
    fata = 0;
}


CZar::~CZar(void)
{
}

void CZar::Arunca()
{
    fata = rand() % 6 + 1;
}