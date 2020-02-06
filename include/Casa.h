#ifndef CASA_H
#define CASA_H
#include <Imovel.h>
#include <string>

using namespace std;

class Casa : public Imovel
{
    public:
        Casa();
        Casa(int NUMPAVIMEN, int NUMQUARTOS, double AREACONST, double AREATER, Endereco ENDE);
        int numPavimen, numQuartos;
        double areaConst, areaTer;
        Endereco endereco;
        int disponivel;
    protected:

    private:
};


#endif // CASA_H
