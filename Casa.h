#ifndef CASA_H
#define CASA_H
#include <Imovel.h>
#include <string>
#include <vector>
using namespace std;

class Casa : public Imovel
{
    public:
        Casa();
        Casa(int NUMPAVIMEN, int NUMQUARTOS, double AREACONST, double AREATER, Endereco ENDE);

        void setNUMPAVIMEN(int PAVIMEN);
        void setNUMQUARTOS(int NUMQUARTOS);
        void setAREACONST(double AREACONST);
        void setAREATER(double AREATER);

        int getNUMPAVIMEN();
        int getNUMQUARTOS();
        double getAREACONST();
        double getAREATER();
        int numPavimen, numQuartos;
        double areaConst, areaTer;

    private:

    protected:

    private:
};


#endif // CASA_H
