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
        void setArea(double ar);
        double getArea();
        double area;

};

#endif // TERRENO_H
