#include "Terreno.h"
#include <string>
#include <vector>
using namespace std;

Terreno::Terreno()
{
    this->area = 0.0;
    this->disponivel = 1;
}

Terreno::Terreno(double AREA)
{
    this->area = 0.0;
    this->disponivel = 0;
}
