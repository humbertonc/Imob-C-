#ifndef IMOVEL_H
#define IMOVEL_H
#include "Endereco.h"
#include <string>

using namespace std;
class Imovel : public Endereco
{
    public:
        Imovel();

        int getAouV();
        double getValor();
        Endereco getEndereco();
        int getTipo();
        string getDescricao();

        void setAouv(int Aouv);
        void setValor(double val);
        void setEndereco(Endereco ende);
        void setTipo(int tip);
        void setDescricao(string desc);

    protected:
        int tipoImovel;

    private:
        Endereco endereco;
        int aouv;
        double valor;
        string descricao;
};

#endif // IMOVEL_H
