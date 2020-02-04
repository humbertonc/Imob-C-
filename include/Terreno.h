#ifndef TERRENO_H
#define TERRENO_H
#include <Imovel.h>
#include <string>

using namespace std;

class Terreno : protected Imovel
{    public:
        Terreno();
        Terreno(double);
        double Area;
    protected:
    private:
};

#endif // TERRENO_H
