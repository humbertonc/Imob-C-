#include "Casa.h"
#include <string>
using namespace std;

Casa::Casa()
{
    this->Npavimentos = 0;
    this->Nquartos = 0;
    this->AreaTerreno = 0.0;
    this->AreaConstruida = 0.0;
}

Casa::Casa(int npavimentos, int nquartos, double areaterreno, double areaconstruida)
{
    this->Npavimentos = npavimentos;
    this->Nquartos = nquartos;
    this->AreaTerreno = areaterreno;
    this->AreaConstruida = areaconstruida;
}
