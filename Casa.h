#ifndef CASA_H
#define CASA_H
#include <Imovel.h>
#include <string>

using namespace std;

class Casa : public Imovel
{
    public:
        Casa();
        Casa(int numPavimen, int numQuartos, double areaConst, double areaTer);
        int numPavimen, numQuartos;
        double areaConst, areaTer;
    protected:

    private:
};


#endif // CASA_H
