#include "Endereco.h"

Endereco::Endereco()
{
    //ctor
}

void Endereco::setBairro(string bai)
{
    bairro = bai;
}

void Endereco::setCidade(string CID)
{
    cidade = CID;
}

void Endereco::setRua(string RUA)
{
    rua = RUA;
}

void Endereco::setCEP(string CEP)
{
    cep = CEP;
}

void Endereco::setNumero(int num)
{
    numero = num;
}
