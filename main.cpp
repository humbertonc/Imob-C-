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
    int menu;
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
                        cout <<("Área do terreno:\n");
                        cin >> terrenos[i].area;
                        cout <<("\n\n%s foi cadastrado com sucesso!\n\n", terrenos[i].descricao);
                    case 2:
                        cout << "---INSTRUCOES---" << endl;
                    case 3:
                        cout << "---INSTRUCOES---" << endl;
                    }
        }
    return 0;
}
