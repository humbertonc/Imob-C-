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

        vector<Imovel*> imovs;

        void cadastraImovel(Imovel *iv);
        void removeImovel(string busca);
        void atualizaImovel(string busca, int tipo);

        void ImprimeImovel(Imovel *imv, int num);
        void ImprimeImovelRed(Imovel *imv, int num);

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
