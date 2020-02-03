#ifndef CASA_H
#define CASA_H
#include "Casa.h"
#include <string>

using namespace std;
class Casa: public Imovel 
{
    public:
        Casa();
        int numPavimen, numQuartos;
        double areaConst, areaTer;

    protected:

    private:
};

#endif // CASA_H
