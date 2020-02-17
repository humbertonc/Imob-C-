#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

using namespace std;
class Endereco
{
    public:
        Endereco();
        string rua, bairro, cidade, cep;
        int numero;

        void setRua(string RUA);
        void setBairro(string bai);
        void setCidade(string CID);
        void setCEP(string CEP);
        void setNumero(int num);

    protected:

    private:
};

#endif // ENDERECO_H
