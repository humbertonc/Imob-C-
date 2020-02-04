#include "Endereco.h"
#include <string>
using namespace std;

Endereco::Endereco()
{
    this->Rua = "Não configurado.";
    this->Numero = 0;
    this->Bairro = "Não configurado.";
    this->CEP = "Não configurado.";
    this->Cidade = "Não configurado.";
    this->Valor = 0;
    this->AouV = "Não configurado.";
    this->TipoDeImovel = 0;
}

Endereco::Endereco(string rua, int numero, string bairro, string cep, string cidade, double valor, string aouv, int tipodeimovel)
{
    this->Rua = rua;
    this->Numero = numero;
    this->Bairro = bairro;
    this->CEP = cep;
    this->Cidade = cidade;
    this->Valor = valor;
    this->AouV = aouv;
    this->TipoDeImovel = tipodeimovel;
}

string Endereco::getRua(){
    return this->Rua;
}

int Endereco::getNumero(){
    return this->Numero;
}

string Endereco::getBairro(){
    return this->Bairro;
}

string Endereco::getCEP(){
    return this->CEP;
}

double Endereco::getValor(){
    return this->Valor;
}

string Endereco::getCidade(){
    return this->Cidade;
}

string Endereco::getAouV(){
    return this-> AouV;
}

void Endereco::setRua(string rua){
    this->Rua = rua;
}

void Endereco::setNumero(int numero){
    this->Numero = numero;
}

void Endereco::setBairro(string bairro){
    this->Bairro = bairro;
}

void Endereco::setCEP(string cep){
    this->CEP = cep;
}

void Endereco::setCidade(string cidade){
    this->Cidade = cidade;
}

void Endereco::setAouV(string aouv){
    this->AouV = aouv;
}

Endereco::~Endereco()
{
    //dtor
}
