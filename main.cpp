#include <iostream>
#include <string>
#include <Imovel.h>
#include <Casa.h>
#include <Terreno.h>
#include <Apartamento.h>
#include <locale.h>
#include <Endereco.h>
#include <SistemaImobiliaria.h>
#include <vector>

using namespace std;

int main(){
    //imoveis.push_back(new Terreno(2.5)); SINTAXE DE PUSH_BACK
setlocale(LC_ALL, "Portuguese");
    int i;

  for(i=0;i<100;i++){
    cout <<("Seja bem-vindo ao nosso sistema de imobili�ria!");
    cout << ("1. Criar Im�vel ");
    cout << ("2. Editar Im�vel ");
    cout << ("3. Visualizar Im�vel ");
    cout << ("4. Deletar Im�vel ");
    cout << ("5. Sair ");

    int menu;
    cin >> menu;
        switch(menu){
            case 1:
                cout << "1. Criar terreno" << endl;
                cout << "2. Criar casa" << endl;
                cout << "3. Criar apartamento" << endl;
                int menu123;
                cin >> menu123;
                    switch(menu123){
                    case 1:
                        {
                        cout <<("Por favor, digite as informa��es referentes ao terreno.\n\n");
                        Terreno t1 = Terreno();
                        cout <<("T�tulo do an�ncio do terreno:\n");
                        string vardescricao;
                        cin >> vardescricao;
                        t1.setDescricao(vardescricao);
                        cout <<("�rea do terreno:\n");
                        double vararea;
                        cin >> vararea;
                        t1.setArea(vararea);


                        cout <<("Valor do terreno:\n");
                        double varvalor;
                        cin >> varvalor;
                        t1.setValor(varvalor);
                        cout <<("O terreno est� para aluguel(true), ou para venda(false)?");
                        bool varaouv;
                        cin >> varaouv;
                        t1.setAouV(varaouv);
                        cout <<("Cidade do terreno:\n");
                        string varcidade;
                        cin >> varcidade;
                        t1.endereco.setCidade(varcidade);
                        cout <<("Bairro do terreno:\n");
                        string varbairro;
                        cin >> varbairro;
                        t1.endereco.setBairro(varbairro);
                        cout <<("Rua do terreno:\n");
                        string varrua;
                        cin >> varrua;
                        t1.endereco.setRua(varrua);
                        cout <<("N�mero do terreno na rua:\n");
                        int varnumero;
                        cin >> varnumero;
                        t1.endereco.setNumero(varnumero);
                        cout <<("CEP do terreno:\n");
                        string varcep;
                        cin >> varcep;
                        t1.endereco.setCEP(varcep);
                        t1.disponivel = false;
                        cout << "O terreno " << t1.getDescricao() << " foi registrado com sucesso." << endl;
                        }
                        //t1.pushback
                        break;
                    case 2:
                        {
                        cout <<("Por favor, digite as informa��es referentes � casa.\n\n");
                        Casa c1 = Casa();
                        cout <<("T�tulo do an�ncio da casa:");
                        string vardescricao2;
                        cin >> vardescricao2;
                        c1.setDescricao(vardescricao2);
                        cout << "N�mero de pavimentos: ";
                        int varpavimentos;
                        cin >> varpavimentos;
                        //c1.setpavimentos

                        //numquartos
                        cout << "N�mero de quartos: ";
                        int varnumquartos;
                        cin >> varnumquartos;
                        //c1.setnumquartos

                        //area terreno
                        cout << "�rea do terreno da casa: ";
                        double varareaterrenocasa;
                        cin >> varareaterrenocasa;
                        //c1.setareaterrenocasa

                        //area construida
                        cout << "�rea constru�da: ";
                        double varareaconstruidacasa;
                        cin >> varareaconstruidacasa;
                        //c1.setareaconstruida

                        cout <<("Valor da casa:\n");
                        double varvalor2;
                        cin >> varvalor2;
                        c1.setValor(varvalor2);

                        cout <<("A casa est� para aluguel(true), ou para venda(false)?");
                        bool varaouv2;
                        cin >> varaouv2;
                        c1.setAouV(varaouv2);
                        cout <<("Cidade da casa:\n");
                        string varcidade2;
                        cin >> varcidade2;
                        c1.endereco.setCidade(varcidade2);
                        cout <<("Bairro da casa:\n");
                        string varbairro2;
                        cin >> varbairro2;
                        c1.endereco.setBairro(varbairro2);
                        cout <<("Rua da casa:\n");
                        string varrua2;
                        cin >> varrua2;
                        c1.endereco.setRua(varrua2);
                        cout <<("N�mero da casa na rua:\n");
                        int varnumero2;
                        cin >> varnumero2;
                        c1.endereco.setNumero(varnumero2);
                        cout <<("CEP da casa:\n");
                        string varcep2;
                        cin >> varcep2;
                        c1.endereco.setCEP(varcep2);
                        c1.disponivel = false;
                        cout << "A casa " << c1.getDescricao() << " foi registrada com sucesso." << endl;
                        }
                        //c1.push_back
                        break;
                    case 3:
                        {
                         cout <<("Por favor, digite as informa��es referentes ao apartamento.\n\n");
                        Apartamento ap1 = Apartamento();
                        cout <<("T�tulo do an�ncio do apartamento:");
                        string vardescricao3;
                        cin >> vardescricao3;
                        ap1.setDescricao(vardescricao3);

                        //areadoapartamento
                        double varareaapartamento;
                        cin >> varareaapartamento;

                        //numeroquartos
                        int varnumeroquartos;
                        cin >> varnumeroquartos;

                        //posicao
                        int varposicao;
                        cin >> varposicao;

                        //andar
                        int varandar;
                        cin >> varandar;

                        //valor do condominio
                        double varvalorcondominio;
                        cin >> varvalorcondominio;

                        //numero de vagas garagem
                        int varnumerovagasgaragemapt;
                        cin >> varnumerovagasgaragemapt;

                        cout <<("Valor do apartamento:\n");
                        double varvalor3;
                        cin >> varvalor3;
                        ap1.setValor(varvalor3);
                        cout <<("O apartamento est� para aluguel(true), ou para venda(false)?");
                        bool varaouv3;
                        cin >> varaouv3;
                        ap1.setAouV(varaouv3);
                        cout <<("Cidade do apartamento:\n");
                        string varcidade3;
                        cin >> varcidade3;
                        ap1.endereco.setCidade(varcidade3);
                        cout <<("Bairro do apartamento:\n");
                        string varbairro3;
                        cin >> varbairro3;
                        ap1.endereco.setBairro(varbairro3);
                        cout <<("Rua do apartamento:\n");
                        string varrua3;
                        cin >> varrua3;
                        ap1.endereco.setRua(varrua3);
                        cout <<("N�mero do apartamento na rua:\n");
                        int varnumero3;
                        cin >> varnumero3;
                        ap1.endereco.setNumero(varnumero3);
                        cout <<("CEP do apartamento:\n");
                        string varcep3;
                        cin >> varcep3;
                        ap1.endereco.setCEP(varcep3);
                        ap1.disponivel = false;
                        cout << "O apartamento " << ap1.getDescricao() << " foi registrado com sucesso." << endl;
                        //ap1.push_back
                        break;
                        }
                    }
    return 0;
        }
    }
}
