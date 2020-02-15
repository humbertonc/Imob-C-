#ifndef IMOVEL_H
#define IMOVEL_H
#include "Endereco.h"
#include <string>

using namespace std;
class Imovel
{
    public:
        Imovel();

        bool getAouV();
        double getValor();
        Endereco getEndereco();
        int getTipo();
        string getDescricao();
        string getTitulo();

        void setAouV(bool Aouv);
        void setValor(double val);
        void setEndereco(Endereco ende);
        void setTipo(int tip);
        void setDescricao(string desc);
        void setTitulo(string titu);

        bool disponivel;


    protected:
        int tipoImovel;
        Endereco endereco;
        bool aouv;
        double valor;
        string descricao;
        string titulo;

    private:

};

#endif // IMOVEL_H
