#include "Imovel.h"

Imovel::Imovel()
{
    //ctor
}

int Imovel::getAouV()
{
    return aouv;
}

double Imovel::getValor()
{
    return valor;
}

Endereco Imovel::getEndereco()
{
    return endereco;
}

string Imovel::getDescricao()
{
    return descricao;
}

int Imovel::getTipo()
{
    return tipoImovel;
}

void Imovel::setAouv(int Aouv)
{
    aouv = Aouv;
}

void Imovel::setEndereco(Endereco ende)
{
    endereco = ende;
}

void Imovel::setDescricao(string desc)
{
    descricao = desc;
}

void Imovel::setValor(double val)
{
    valor = val;
}

void Imovel::setTipo(int tip)
{
    tipoImovel = tip;
}
