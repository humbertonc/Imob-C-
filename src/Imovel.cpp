#include "Imovel.h"

Imovel::Imovel()
{
    //ctor
}

bool Imovel::getAouV()
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

string Imovel::getTitulo()
{
    return titulo;
}

int Imovel::getTipo()
{
    return tipoImovel;
}

void Imovel::setAouV(bool AouV)
{
    aouv = AouV;
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

void Imovel::setTitulo(string titu)
{
    titulo = titu;
}
