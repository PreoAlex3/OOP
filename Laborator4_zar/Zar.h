#include <stdlib.h>
#include <time.h>
#include <vector>

using namespace std;

class CZar
{
public:
    CZar(void);
    ~CZar(void);

    void Arunca();
    int GetFata() const { return fata;}

private:
    int fata;
};

struct PERECHE
{
    int valoare1;
    int valoare2;
};
