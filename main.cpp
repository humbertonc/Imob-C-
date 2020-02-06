#include <iostream>
#include <string>
#include <Imovel.h>
#include <Casa.h>
#include <Terreno.h>
#include <Apartamento.h>
#include <locale.h>
#include <Endereco.h>

using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");

    cout <<("Seja bem-vindo ao nosso sistema de imobiliária!");
    cout <<("1. Criar Imóvel");
    int menu, i;
    cin >> menu;
        switch(menu){
            case 1:
                cout << "1. Criar terreno" << endl;
                cout << "2. Criar casa" << endl;
                cout << "3. Criar apartamento" << endl;
                int menu2;
                cin >> menu2;
                    switch(menu2){
                    case 1:
                        cout <<("Por favor, digite as informações referentes ao terreno.\n\n");
                        cout <<("Título do anúncio do terreno:");
                        cin >> terrenos[i].titulo;
                        cout <<("Área do terreno:\n");
                        cin >> terrenos[i].area;
                        cout <<("Valor do terreno:\n");
                        cin >> terrenos[i].valor;
                        cout <<("O terreno está para aluguel(a), ou para venda(v)?");
                        cin >> terrenos[i].aouv;
                        cout <<("Cidade do terreno:\n");
                        cin >> terrenos[i].endereco.cidade;
                        cout <<("Bairro do terreno:\n");
                        cin >> terrenos[i].endereco.bairro;
                        cout <<("Rua do terreno:\n");
                        cin >> terrenos[i].endereco.rua;
                        cout <<("Número do terreno na rua:\n");
                        cin >> terrenos[i].endereco.numero;
                        cout <<("CEP do terreno:\n");
                        cin >> terrenos[i].endereco.cep;
                        terrenos[i].disponivel = 1;
                        cout <<("\n\n%s foi cadastrado com sucesso!\n\n", terrenos[i].titulo);
                    case 2:
                        cout <<("Por favor, digite as informações referentes a casa.\n\n");
                        cout <<("Título do anúncio da casa:");
                        cin >> casas[i].titulo;
                        cout <<("Quantos pavimentos existem na casa:\n");
                        cin >> casas[i].npavimentos;
                        cout <<("Quantos quartos existem na casa:\n");
                        cin >> casas[i].nquartos;
                        cout <<("Qual a área do terreno da casa:\n");
                        cin >> casas[i].areaterreno;
                        cout <<("Qual a área construída da casa:\n");
                        cin >> casas[i].areaconstruida;
                        cout <<("Qual o valor da casa:\n");
                        cin >> casas[i].valor;
                        cout <<("a casa está para aluguel(a), ou para venda(v)?");
                        cin >> casas[i].aouv;
                        cout <<("Cidade da casa:\n");
                        cin >> casas[i].endereco.cidade;
                        cout <<("Bairro da casa:\n");
                        cin >> casas[i].endereco.bairro;
                        cout <<("Rua da casa:\n");
                        cin >> casas[i].endereco.rua;
                        cout <<("Número da casa:\n");
                        cin >> casas[i].endereco.numero;
                        cout <<("CEP da casa:\n");
                        cin >> casas[i].endereco.cep;
                        casas[i].disponivel = 1;
                        cout <<("\n\n%s foi cadastrado com sucesso!\n\n", casas[i].titulo);
                    case 3:
                        cout <<("Por favor, digite as informações referentes ao apartamento.\n\n");
                        cout <<("Título do anúncio da apartamento:");
                        cin >> apartamentos[i].titulo;
                        cout <<("Qual a área do apartamento:\n");
                        cin >> apartamentos[i].area;
                        cout <<("Quantos quartos existem no apartamentos:\n");
                        cin >> apartamentos[i].nquartos;
                        cout <<("Qual a posição do apartamento:\n");
                        cin >> apartamentos[i].posicao;
                        cout <<("Qual o andar do apartamento:\n");
                        cin >> apartamentos[i].andar;
                        cout <<("Quantas vagas na garagem:\n");
                        cin >> apartamentos[i].nvagasgaragem;
                        cout <<("Qual o valor do apartamento:\n");
                        cin >> apartamentos[i].valor;
                        cout <<("O apartamento está para aluguel(a), ou para venda(v)?");
                        cin >> apartamentos[i].aouv;
                        cout <<("Cidade do apartamento:\n");
                        cin >> apartamentos[i].endereco->cidade;
                        cout <<("Bairro do apartamento:\n");
                        cin >> apartamentos[i].endereco->bairro;
                        cout <<("Rua do apartamento:\n");
                        cin >> apartamentos[i].endereco->rua;
                        cout <<("Número do apartamento:\n");
                        cin >> apartamentos[i].endereco->numero;
                        cout <<("CEP do apartamento:\n");
                        cin >> apartamentos[i].endereco->cep;
                        apartamentos[i].disponivel = 1;
                        cout <<("\n\n%s foi cadastrado com sucesso!\n\n", apartamentos[i].titulo);
                    }
        }
    return 0;
}
