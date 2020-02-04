#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include <Imovel.h>
#include <string>

using namespace std;

class Apartamento : public Imovel
{
    public:
        Apartamento();
        Apartamento(double area, int nquartos, string posicao, int andar, double valor, int nvagasgaragem);
        double Area;
        int Nquartos;
        string Posicao;
        int Andar;
        double Valor;
        int NVagasGaragem;
};

#endif // APARTAMENTO_H
