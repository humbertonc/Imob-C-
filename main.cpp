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

    puts("Seja bem-vindo ao nosso sistema de imobiliária!");
    puts("1. Criar Imóvel");
    int menu;
    cin >> menu;
        switch(menu){
            case 1:
                cout << "1. Criar casa" << endl;
                cout << "2. Criar terreno" << endl;
                cout << "3. Criar apartamento" << endl;
                int menu2;
                cin >> menu2;
                    switch(menu2){
                    case 1:
                        cout << "---INSTRUCOES---" << endl;
                    case 2:
                        cout << "---INSTRUCOES---" << endl;
                    case 3:
                        cout << "---INSTRUCOES---" << endl;
                    }
        }
    return 0;
}
