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
    int i, menu = 0;
    SistemaImobiliaria sist;
  while(menu != 6){
    cout <<("========Seja bem-vindo ao nosso sistema de imobiliária!========\n\n");
    cout << ("1. Criar Imóvel \n");
    cout << ("2. Buscar Imóvel \n");
    cout << ("3. Listar Imóvel \n");
    cout << ("4. Editar Imóvel \n");
    cout << ("5. Deletar Imóvel \n");
    cout << ("6. Sair\n\n");

    cin >> menu;
        switch(menu){
            case 1:{//Criar
                cout << "\n1. Criar terreno" << endl;
                cout << "2. Criar casa" << endl;
                cout << "3. Criar apartamento\n" << endl;
                int menu123;
                cin >> menu123;
                    switch(menu123){
                    case 1:
                        {
                        cout <<("Por favor, digite as informações referentes ao terreno.\n\n");
                        Terreno t1 = Terreno();
                        cout <<("Título do anúncio do terreno:\n");
                        string vardescricao;
                        getline(cin, vardescricao);
                        cin.ignore()
                        t1.setTitulo(vardescricao);
                        cout <<("Descrição do terreno:\n");
                        cin >> vardescricao;
                        t1.setDescricao(vardescricao);
                        cout <<("Área do terreno:\n");
                        double vararea;
                        cin >> vararea;
                        t1.setArea(vararea);
                        cout <<("Valor do terreno:\n");
                        double varvalor;
                        cin >> varvalor;
                        t1.setValor(varvalor);
                        cout <<("O terreno está para venda(1), ou para aluguel(2)?\n");
                        int varaouv1;
                        bool varaouv2;
                        cin >> varaouv1;
                        if(varaouv1 == 1){
                            varaouv2 = true;
                        }
                        else{
                            varaouv2 = false;
                        }
                        t1.setAouV(varaouv2);
                        cout <<("Cidade do terreno:\n");
                        string varcidade;
                        getline(cin, varcidade);
                        cin.ignore()
                        t1.getEndereco().setCidade(varcidade);
                        cout <<("Bairro do terreno:\n");
                        string varbairro;
                        getline(cin, varbairro);
                        cin.ignore()
                        t1.getEndereco().bairro = varbairro;
                        cout <<("Rua do terreno:\n");
                        string varrua;
                        getline(cin, varrua);
                        cin.ignore()
                        t1.getEndereco().setRua(varrua);
                        cout <<("Número do terreno na rua:\n");
                        int varnumero;
                        cin >> varnumero;
                        t1.getEndereco().setNumero(varnumero);
                        cout <<("CEP do terreno:\n");
                        string varcep;
                        getline(cin, varcep);
                        cin.ignore()
                        t1.getEndereco().setCEP(varcep);
                        t1.disponivel = true;
                        sist.cadastraImovel(&t1);
                        cout << "O terreno " << t1.getTitulo() << " foi registrado com sucesso.\n\n" << endl;
                        }
                        break;
                    case 2:
                        {
                        cout <<("Por favor, digite as informações referentes à casa.\n\n");
                        Casa c1 = Casa();
                        cout <<("Título do anúncio da casa:");
                        string vardescricao2;
                        getline(cin, vardescricao2);
                        cin.ignore()
                        c1.setDescricao(vardescricao2);
                        cout << "Número de pavimentos: ";
                        int varpavimentos;
                        cin >> varpavimentos;
                        c1.setNUMPAVIMEN(varpavimentos);
                        cout << "Número de quartos: ";
                        int varnumquartos;
                        cin >> varnumquartos;
                        c1.setNUMQUARTOS(varnumquartos);
                        cout << "Área do terreno da casa: ";
                        double varareaterrenocasa;
                        cin >> varareaterrenocasa;
                        c1.setAREATER(varareaterrenocasa);
                        //area construida
                        cout << "Área construída:\n";
                        double varareaconstruidacasa;
                        cin >> varareaconstruidacasa;
                        c1.setAREACONST(varareaconstruidacasa);
                        cout <<("Valor da casa:\n");
                        double varvalor2;
                        cin >> varvalor2;
                        c1.setValor(varvalor2);
                        cout <<("A casa está para venda(1), ou para aluguel(2)?\n");
                        int varaouv1;
                        bool varaouv2;
                        cin >> varaouv1;
                        if(varaouv1 == 1){
                            varaouv2 = true;
                        }
                        else{
                            varaouv2 = false;
                        }
                        c1.setAouV(varaouv2);
                        cout <<("Cidade da casa:\n");
                        string varcidade2;
                        getline(cin, varcidade2);
                        cin.ignore()
                        c1.getEndereco().setCidade(varcidade2);
                        cout <<("Bairro da casa:\n");
                        string varbairro2;
                        getline(cin, varbairro2);
                        cin.ignore()
                        c1.getEndereco().setBairro(varbairro2);
                        cout <<("Rua da casa:\n");
                        string varrua2;
                        getline(cin, varrua2);
                        cin.ignore()
                        c1.getEndereco().setRua(varrua2);
                        cout <<("Número da casa na rua:\n");
                        int varnumero2;
                        cin >> varnumero2;
                        c1.getEndereco().setNumero(varnumero2);
                        cout <<("CEP da casa:\n");
                        string varcep2;
                        getline(cin, varcep2);
                        cin.ignore()
                        c1.getEndereco().setCEP(varcep2);
                        c1.disponivel = true;
                        cout << "A casa " << c1.getDescricao() << " foi registrada com sucesso." << endl;
                        }
                        break;
                    case 3:
                        {
                         cout <<("Por favor, digite as informações referentes ao apartamento.\n\n");
                        Apartamento ap1 = Apartamento();
                        cout <<("Título do anúncio do apartamento:");
                        string vardescricao3;
                        getline(cin, vardescricao3);
                        cin.ignore()
                        ap1.setDescricao(vardescricao3);
                        cout <<("Área do apartamento: \n");
                        double varareaapartamento;
                        cin >> varareaapartamento;
                        ap1.area = varareaapartamento;
                        cout <<("Número de quartos: \n");
                        int varnumeroquartos;
                        cin >> varnumeroquartos;
                        ap1.nquartos = varnumeroquartos;
                        cout <<("Posicao do apartamento: \n");
                        string varposicao;
                        getline(cin, varposicao);
                        cin.ignore()
                        cout <<("Número de andares do apartamento: \n");
                        int varandar;
                        cin >> varandar;
                        ap1.andar = varandar;
                        cout <<("Valor do condomínio do apartamento: \n");
                        double varvalorcondominio;
                        cin >> varvalorcondominio;
                        ap1.valor = varvalorcondominio;
                        cout <<("Número de vagas na garagem do apartamento: \n");
                        int varnumerovagasgaragemapt;
                        cin >> varnumerovagasgaragemapt;
                        ap1.nvagasgaragem = varnumerovagasgaragemapt;
                        cout <<("O apartamento está para venda(1), ou para aluguel(2)?");
                        int varaouv1;
                        bool varaouv2;
                        cin >> varaouv1;
                        if(varaouv1 == 1){
                            varaouv2 = true;
                        }
                        else{
                            varaouv2 = false;
                        }
                        ap1.setAouV(varaouv2);
                        cout <<("Cidade do apartamento:\n");
                        string varcidade3;
                        getline(cin, varcidade3);
                        cin.ignore()
                        ap1.getEndereco().setCidade(varcidade3);
                        cout <<("Bairro do apartamento:\n");
                        string varbairro3;
                        getline(cin, varbairro3);
                        cin.ignore()
                        ap1.getEndereco().setBairro(varbairro3);
                        cout <<("Rua do apartamento:\n");
                        string varrua3;
                        getline(cin, varrua3);
                        cin.ignore()
                        ap1.getEndereco().setRua(varrua3);
                        cout <<("Número do apartamento na rua:\n");
                        int varnumero3;
                        cin >> varnumero3;
                        ap1.getEndereco().setNumero(varnumero3);
                        cout <<("CEP do apartamento:\n");
                        string varcep3;
                        getline(cin, varcep3);
                        ap1.getEndereco().setCEP(varcep3);
                        ap1.disponivel = true;
                        cout << "O apartamento " << ap1.getDescricao() << " foi registrado com sucesso." << endl;
                        break;
                        }
                    }
            }
            break;
            case 2:{//Buscar
                cout << ("1. Buscar imóvel por título: \n");
                cout << ("2. Buscar imóvel por bairro: \n");
                cout << ("3. Buscar imóvel por cidade: \n");
                cout << ("4. Buscar por preco de imóvel: \n");
                int opcao;
                cin >> opcao;
                switch(opcao){
                    case 1:{
                        string busca;
                        getline(cin, busca);
                        cin.ignore()
                        sist.buscaImovelTit(busca);
                        break;
                    }
                    case 2:{
                        string busca;
                        getline(cin, busca);
                        cin.ignore()
                        sist.buscaImovelBai(busca);
                        break;
                    }
                    case 3:{
                        string busca;
                        getline(cin, busca);
                        cin.ignore()
                        sist.buscaImovelCid(busca);
                        break;
                    }
                    case 4:{
                        int minimo;
                        int maximo;
                        cin >> minimo;
                        cin >> maximo;
                        sist.buscaImovelPreco(minimo, maximo);
                        break;
                    }
                }
            }
            break;
            case 3:{//Listar
                cout << "1. Visualizar todos os imóveis: \n";
                cout << "2. Visualizar os imóveis por tipo: \n";
                cout << "3. Visualizar os imóveis por aluguel ou venda: \n";
                int visualizar;
                cin >> visualizar;
                switch(visualizar){
                    case 1:{
                        sist.mostraTodos();
                        break;
                    }
                    case 2:{
                        int tipo;
                        cin >> tipo;
                        sist.mostraPorTipo(tipo);
                        break;
                    }
                    case 3:{
                        bool seletor;
                        cin >> seletor;
                        sist.mostraAouV(seletor);
                        break;
                    }
                }
            }
            break;
            case 4:{//Editar
                cout << ("Busque pelo imóvel: ");
                string busca;
                getline(cin, busca);
                sist.atualizaImovel(busca);
            }
            break;
            case 5:{//Deletar
                cout << ("Delete o imóvel: ");
                string busca;
                getline(cin, busca);
                cin.ignore()
                sist.removeImovel(busca);
            }
            break;
            case 6:{//Sair
                return 0;
            }
            break;
            }
    }
return 0;
}
