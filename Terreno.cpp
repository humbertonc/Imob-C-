#include "Terreno.h"
#include <string>
#include <vector>
using namespace std;

Terreno::Terreno()
{
    this->area = 0.0;
    this->tipoImovel = 1;
    this->disponivel = 1;
}

Terreno::Terreno(double AREA)
{
    this->area = AREA;
    this->tipoImovel = 1;
    this->disponivel = 0;
}

void Terreno::setArea(double ar)
{
    area = ar;
}

double Terreno::getArea()
{
    return area;
}
