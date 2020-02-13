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




        void setNUMPAVIMEN(int);



        void setNUMQUARTOS(int);
        void setAREACONST(double);
        void setAREATER(double);
        int getNUMPAVIMEN());
        int setNUMQUARTOS();
        int setAREACONST();
        int setAREATER();

    private:
        int numPavimen, numQuartos;
        double areaConst, areaTer;
        Endereco endereco;
        int disponivel;

    protected:

    private:
};


#endif // CASA_H
