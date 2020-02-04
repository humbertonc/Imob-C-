#ifndef IMOVEL_H
#define IMOVEL_H
#include <string>
#include "Endereco.h"

using namespace std;

class Imovel : public Endereco
{   public:
        Imovel();
        Imovel(int);
        //Imovel();
        int TipoDeImovel;
    protected:

    private:
};

#endif // IMOVEL_H
