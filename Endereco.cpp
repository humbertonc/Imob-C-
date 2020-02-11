#include "Endereco.h"
#include <string>
#include <vector>
using namespace std;

Endereco::Endereco()
{
    this->rua = "N�o configurado.";
    this->numero = 0;
    this->bairro = "N�o configurado.";
    this->cep = "N�o configurado.";
    this->cidade = "N�o configurado.";
    this->valor = 0;
    this->aouv = "N�o configurado.";
}

Endereco::Endereco(string RUA, int NUMERO, string BAIRRO, string CEP, string CIDADE, double VALOR, string AOUV)
{
    this->rua = RUA;
    this->numero = NUMERO;
    this->bairro = BAIRRO;
    this->cep = CEP;
    this->cidade = CIDADE;
    this->valor = VALOR;
    this->aouv = AOUV;
}

string Endereco::getTitulo(){
    return this->titulo;
}

void Endereco::setTitulo(string TITULO){
    this->titulo = TITULO;
}

string Endereco::getRua(){
    return this->rua;
}

int Endereco::getNumero(){
    return this->numero;
}

string Endereco::getBairro(){
    return this->bairro;
}

string Endereco::getCEP(){
    return this->cep;
}

double Endereco::getValor(){
    return this->valor;
}

string Endereco::getCidade(){
    return this->cidade;
}

string Endereco::getAouV(){
    return this->aouv;
}

void Endereco::setRua(string RUA){
    this->rua = RUA;
}

void Endereco::setNumero(int NUMERO){
    this->numero = NUMERO;
}

void Endereco::setBairro(string BAIRRO){
    this->bairro = BAIRRO;
}

void Endereco::setCEP(string CEP){
    this->cep = CEP;
}

void Endereco::setCidade(string CIDADE){
    this->cidade = CIDADE;
}

void Endereco::setAouV(string AOUV){
    this->aouv = AOUV;
}

Endereco::~Endereco()
{
    //dtor
}
