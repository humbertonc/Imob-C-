#ifndef SISTEMAIMOBILIARIA_H
#define SISTEMAIMOBILIARIA_H
#include "Imovel.h"
#include "Casa.h"
#include "Terreno.h"
#include "Apartamento.h"
#include <string>
#include <vector>
using namespace std;

class SistemaImobiliaria
{
    public:
        SistemaImobiliaria();

        vector<Casa> casas;
        vector<Terreno> terrenos;
        vector<Apartamento> apartamentos;

        void cadastraTerreno(Terreno ter);
        void cadastraCasa(Casa cas);
        void cadastraApt(Apartamento apt);

        void ImprimeTerreno(Terreno ter, int num);
        void ImprimeCasa(Casa cas, int num);
        void ImprimeApartamento(Apartamento apt, int num);

        void mostraTodos();
        void mostraPorTipo(int tipo);
        void mostraAouV(bool seletor);

        void buscaImovelTit(string busca);
        void buscaImovelBai(string busca);
        void buscaImovelCid(string busca);
        void buscaImovelPreco(int minimo, int maximo);

    protected:

    private:
};

#endif // SISTEMAIMOBILIARIA_H
