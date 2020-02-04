#include "Apartamento.h"
#include <string>
using namespace std;

Apartamento::Apartamento()
{
    this->Area = 0.0;
    this->Nquartos = 0;
    this-> Posicao = "Não configurada";
    this->Andar = 0;
    this->Valor = 0.0;
    this->NVagasGaragem = 0;
}

Apartamento::Apartamento(double area, int nquartos, string posicao, int andar, double valor, int nvagasgaragem)
{
    this->Area = area;
    this->Nquartos = nquartos;
    this-> Posicao = posicao;
    this->Andar = andar;
    this->Valor = valor;
    this->NVagasGaragem = nvagasgaragem;
}
