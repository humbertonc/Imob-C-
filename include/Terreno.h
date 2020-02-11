#ifndef TERRENO_H
#define TERRENO_H
#include <Imovel.h>
#include <string>
#include <vector>
using namespace std;

class Terreno : public Imovel
{
    public:
        Terreno();
        Terreno(double AREA);
        double area;
        int disponivel;
    protected:
    private:
};

#endif // TERRENO_H
