#ifndef ENDERECO_H
#define ENDERECO_H
#include "string"

using namespace std;

class Endereco
{
    public:
        Endereco();
        Endereco(string rua, int numero, string bairro, string cep, string cidade, double valor, string aouv);
        virtual ~Endereco();
        string getRua();
        void setRua(string);
        int getNumero();
        void setNumero(int);
        string getBairro();
        void setBairro(string);
        string getCEP();
        void setCEP(string);
        string getCidade();
        void setCidade(string);
        double getValor();
        void setValor(double);
        string getAouV();
        void setAouV(string);
        string getTitulo;
        void setTitulo();
        string rua;
        int numero;
        string bairro;
        string cep;
        string cidade;
        double valor;
        string aouv;
        string titulo;
    protected:
    private:
};

#endif // ENDERECO_H
