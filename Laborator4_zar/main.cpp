#include "Zar.h"

int main()
{
    time_t t;
    time(&t);
    unsigned timp = (unsigned)t;
    srand(timp);

    CZar zar1;
    CZar zar2;

    vector<PERECHE> aparitii;
    int frecv_aparitii[6][6];

    for(int i = 0;i < 6;i++)
    {
        for(int j = 0;j < 6;j++)
        {
            frecv_aparitii[i][j] = 0;
        }
    }

    PERECHE p;

    zar1.Arunca();
    zar2.Arunca();

    p.valoare1 = zar1.GetFata();
    p.valoare2 = zar2.GetFata();

    int p1_vechi = (p.valoare1 < p.valoare2) ? p.valoare1 : p.valoare2;
    int p2_vechi = (p.valoare1 > p.valoare2) ? p.valoare1 : p.valoare2;

    int contor = 1;
    int contor_max = 1;
    int indice_z1 = p1_vechi;
    int indice_z2 = p2_vechi;

    for(int i = 0; i < 8999;i++)
    {
        zar1.Arunca();
        zar2.Arunca();

        p.valoare1 = zar1.GetFata();
        p.valoare2 = zar2.GetFata();

        int p1 = (p.valoare1 < p.valoare2) ? p.valoare1 : p.valoare2;
        int p2 = (p.valoare1 > p.valoare2) ? p.valoare1 : p.valoare2;

        if((p1 == p1_vechi) && (p2 == p2_vechi))
        {
            contor++;
        }
        else
        {
            if(contor > contor_max)
            {
                contor_max = contor;
                indice_z1 = p1_vechi;
                indice_z2 = p2_vechi;
            }
            contor = 1;
            p1_vechi = p1;
            p2_vechi = p2;
        }

        frecv_aparitii[p1-1][p2-1]++;

        aparitii.push_back(p);
    }

    return 0;
}