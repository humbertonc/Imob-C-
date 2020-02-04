#ifndef CASA_H
#define CASA_H
#include <Imovel.h>
#include <string>

using namespace std;

class Casa : protected Imovel
{
    public:
        Casa();
        Casa(int,int,double,double);
        int Npavimentos;
        int Nquartos;
        double AreaTerreno;
        double AreaConstruida;
    protected:
    private:
};

#endif // CASA_H
