#ifndef SISTEMAIMOBILIARIA_H
#define SISTEMAIMOBILIARIA_H
#include "Imovel.h"
#include "Casa.h"
#include "Terreno.h"
#include "Apartamento.h"
#include <string>

using namespace std;

class SistemaImobiliaria
{
    public:
        SistemaImobiliaria();

        Casa casas[100];
        Terreno terrenos[100];
        Apartamento apartamentos[100];

        void cadastraTerreno(Terreno ter);
        void cadastraCasa(Casa cas);
        void cadastraApt(Apartamento apt);
        void mostraTodos();

    protected:

    private:
};

#endif // SISTEMAIMOBILIARIA_H
