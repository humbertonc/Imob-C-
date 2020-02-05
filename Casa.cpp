#include "Casa.h"
#include <string>
using namespace std;

Casa::Casa()
{
    this-> numPavimen = 0;
    this->numQuartos = 0;
    this->areaConst = 0;
    this->areaTer = 0;
    this->tipoImovel = 2;
    disponivel = 0;
}

Casa::Casa(int NUMPAVIMEN, int NUMQUARTOS, double AREACONST, double AREATER, Endereco ENDE){
    this->numPavimen = NUMPAVIMEN;
    this->numQuartos = NUMQUARTOS;
    this->areaConst = AREACONST;
    this->areaTer = AREATER;
    this->tipoImovel = 2;
    this->endereco = ENDE;
    disponivel = 0;
}

