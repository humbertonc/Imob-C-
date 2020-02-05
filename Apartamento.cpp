#include "Apartamento.h"
#include <string>
using namespace std;

Apartamento::Apartamento()
{
    this->area = 0.0;
    this->nquartos = 0;
    this->posicao = "Não configurada";
    this->andar = 0;
    this->valor = 0.0;
    this->nvagasgaragem = 0;
}

Apartamento::Apartamento(double AREA, int NQUARTOS, string POSICAO, int ANDAR, double VALOR, int NVAGASGARAGEM)
{
    this->area = AREA;
    this->nquartos = NQUARTOS;
    this->posicao = POSICAO;
    this->andar = ANDAR;
    this->valor = VALOR;
    this->nvagasgaragem = NVAGASGARAGEM;
}
