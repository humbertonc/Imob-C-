#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include <Imovel.h>
#include <string>

using namespace std;

class Apartamento : public Imovel
{
    public:
        Apartamento();
        Apartamento(double AREA, int NQUARTOS, string POSICAO, int ANDAR, double VALOR, int NVAGASGARAGEM, Endereco ENDE);
        double area;
        int nquartos;
        string posicao;
        int andar;
        double valor;
        int nvagasgaragem;
        Endereco endereco;
};

#endif // APARTAMENTO_H
