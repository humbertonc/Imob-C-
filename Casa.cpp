#include "Casa.h"
#include <string>
#include <vector>
using namespace std;

Casa::Casa()
{
    this-> numPavimen = 0;
    this->numQuartos = 0;
    this->areaConst = 0;
    this->areaTer = 0;
    this->tipoImovel = 2;
    disponivel = 1;
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

void Casa::setNUMPAVIMEN(int PAVIMEN){
    this->numPavimen = PAVIMEN;
}

void Casa::setNUMQUARTOS(int NUMQUARTOS){
    this->numQuartos = NUMQUARTOS;
}

void Casa::setAREACONST(double AREACONST){
    this->areaConst = AREACONST;
}

void Casa::setAREATER(double AREATER){
    this-> areaTer = AREATER;
}

int Casa::getNUMPAVIMEN(){
    return this->numPavimen;
}

int Casa::getNUMQUARTOS(){
    return this->numQuartos;
}

double Casa::getAREACONST(){
    return this->areaConst;
}

double Casa::getAREATER(){
    return this->areaTer;
}
