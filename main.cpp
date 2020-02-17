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
#include <fstream>

using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");
    int i, menu = 0;
    int tipao;
    SistemaImobiliaria sist;

    bool av;
    int numero, quart, pav, anda, nq, nv;
    double valor, area, ater, aconst, arapt;
    string titulao, descrica, posapt;
    ifstream arquivo;
	arquivo.open("lista.txt");

    while(!arquivo.eof()){
        arquivo >> tipao;
        arquivo.ignore();
        if(tipao == 1){
            Terreno *pter = new Terreno();
            Endereco ende = Endereco();
            getline(arquivo, titulao);
            pter->setTitulo(titulao);
            getline(arquivo, descrica);
            pter->setDescricao(descrica);
            arquivo >> av;
            arquivo.ignore();
            pter->setAouV(av);
            arquivo >> valor;
            arquivo.ignore();
            pter->setValor(valor);
            getline(arquivo, ende.bairro);
            getline(arquivo, ende.cep);
            getline(arquivo, ende.cidade);
            arquivo >> ende.numero;
            arquivo.ignore();
            getline(arquivo, ende.rua);
            arquivo >> area;
            arquivo.ignore();
            pter->setArea(area);

            pter->setEndereco(ende);

            sist.imovs.push_back(pter);
        }else if(tipao == 2){
            Casa *pcasa = new Casa();
            Endereco ende = Endereco();
            getline(arquivo, titulao);
            pcasa->setTitulo(titulao);
            getline(arquivo, descrica);
            pcasa->setDescricao(descrica);
            arquivo >> av;
            arquivo.ignore();
            pcasa->setAouV(av);
            arquivo >> valor;
            arquivo.ignore();
            pcasa->setValor(valor);
            getline(arquivo, ende.bairro);
            getline(arquivo, ende.cep);
            getline(arquivo, ende.cidade);
            arquivo >> ende.numero;
            arquivo.ignore();
            getline(arquivo, ende.rua);
            arquivo >> aconst;
            arquivo.ignore();
            pcasa->setAREACONST(aconst);
            arquivo >> ater;
            arquivo.ignore();
            pcasa->setAREATER(ater);
            arquivo >> pav;
            arquivo.ignore();
            pcasa->setNUMPAVIMEN(pav);
            arquivo >> quart;
            arquivo.ignore();
            pcasa->setNUMQUARTOS(quart);

            pcasa->setEndereco(ende);

            sist.imovs.push_back(pcasa);
        }else if(tipao == 3){
            Apartamento *papt = new Apartamento();
            Endereco ende = Endereco();
            getline(arquivo, titulao);
            papt->setTitulo(titulao);
            getline(arquivo, descrica);
            papt->setDescricao(descrica);
            arquivo >> av;
            arquivo.ignore();
            papt->setAouV(av);
            arquivo >> valor;
            arquivo.ignore();
            papt->setValor(valor);
            getline(arquivo, ende.bairro);
            getline(arquivo, ende.cep);
            getline(arquivo, ende.cidade);
            arquivo >> ende.numero;
            arquivo.ignore();
            getline(arquivo, ende.rua);

            arquivo >> anda;
            arquivo.ignore();
            papt->andar = anda;

            arquivo >> arapt;
            arquivo.ignore();
            papt->area = arapt;

            arquivo >> nq;
            arquivo.ignore();
            papt->nquartos = nq;

            arquivo >> nv;
            arquivo.ignore();
            papt->nvagasgaragem = nv;

            getline(arquivo, posapt);
            papt->posicao = posapt;

            papt->setEndereco(ende);

            sist.imovs.push_back(papt);
        }

    }
    arquivo.close();

  while(menu != 6){
    cout <<("========Seja bem-vindo ao nosso sistema de imobiliária!========\n\n");
    cout << ("1. Criar Imóvel \n");
    cout << ("2. Buscar Imóvel \n");
    cout << ("3. Listar Imóvel \n");
    cout << ("4. Editar Imóvel \n");
    cout << ("5. Deletar Imóvel \n");
    cout << ("6. Sair\n");
    cout << ("Atenção! Apenas saia do programa utilizando o comando sair!\n\n");

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
                        Terreno *t1 = new Terreno();
                        Endereco ende = Endereco();
                        cout <<("Título do anúncio do terreno:\n");
                        string vardescricao;
                        cin.ignore();
                        getline(cin, vardescricao);

                        t1->setTitulo(vardescricao);
                        cout <<("Descrição do terreno:\n");

                        getline(cin, vardescricao);

                        t1->setDescricao(vardescricao);
                        cout <<("Área do terreno:\n");
                        double vararea;
                        cin >> vararea;
                        t1->setArea(vararea);
                        cout <<("Valor do terreno:\n");
                        double varvalor;
                        cin >> varvalor;
                        t1->setValor(varvalor);
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
                        t1->setAouV(varaouv2);
                        cout <<("Cidade do terreno:\n");
                        string varcidade;
                        cin.ignore();
                        getline(cin, varcidade);

                        ende.cidade = varcidade;
                        cout <<("Bairro do terreno:\n");
                        string varbairro;

                        getline(cin, varbairro);

                        ende.bairro = varbairro;
                        cout <<("Rua do terreno:\n");
                        string varrua;

                        getline(cin, varrua);

                        ende.rua = varrua;
                        cout <<("Número do terreno na rua:\n");
                        int varnumero;
                        cin >> varnumero;
                        ende.numero = varnumero;
                        cout <<("CEP do terreno:\n");
                        string varcep;
                        cin.ignore();
                        getline(cin, varcep);

                        ende.cep = varcep;
                        t1->disponivel = true;
                        t1->setEndereco(ende);
                        sist.cadastraImovel(t1);
                        cout << "O terreno " << t1->getTitulo() << " foi registrado com sucesso.\n\n" << endl;
                        break;
                        }
                    case 2:
                        {
                        cout <<("Por favor, digite as informações referentes à casa.\n\n");
                        Casa *c1 = new Casa();
                        Endereco ende = Endereco();
                        cout <<("Título do anúncio da casa:\n");
                        string vardescricao2;
                            cin.ignore();
                        getline(cin, vardescricao2);

                        c1->setTitulo(vardescricao2);

                        cout <<("Descrição da casa:\n");
                        getline(cin, vardescricao2);
                        c1->setDescricao(vardescricao2);

                        cout << "Número de pavimentos: \n";
                        int varpavimentos;
                        cin >> varpavimentos;
                        c1->setNUMPAVIMEN(varpavimentos);
                        cout << "Número de quartos: \n";
                        int varnumquartos;
                        cin >> varnumquartos;
                        c1->setNUMQUARTOS(varnumquartos);
                        cout << "Área do terreno da casa: \n";
                        double varareaterrenocasa;
                        cin >> varareaterrenocasa;
                        c1->setAREATER(varareaterrenocasa);
                        //area construida
                        cout << "Área construída:\n";
                        double varareaconstruidacasa;
                        cin >> varareaconstruidacasa;
                        c1->setAREACONST(varareaconstruidacasa);
                        cout <<("Valor da casa:\n");
                        double varvalor2;
                        cin >> varvalor2;
                        c1->setValor(varvalor2);
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
                        c1->setAouV(varaouv2);
                        cout <<("Cidade da casa:\n");
                        string varcidade2;
                        cin.ignore();
                        getline(cin, varcidade2);

                        ende.cidade = varcidade2;
                        cout <<("Bairro da casa:\n");
                        string varbairro2;

                        getline(cin, varbairro2);

                        ende.bairro = varbairro2;
                        cout <<("Rua da casa:\n");
                        string varrua2;

                        getline(cin, varrua2);

                        ende.rua = varrua2;
                        cout <<("Número da casa na rua:\n");
                        int varnumero2;
                        cin >> varnumero2;
                        ende.numero = varnumero2;
                        cout <<("CEP da casa:\n");
                        string varcep2;
                        cin.ignore();
                        getline(cin, varcep2);

                        ende.cep = varcep2;
                        c1->disponivel = true;
                        c1->setEndereco(ende);
                        sist.cadastraImovel(c1);
                        cout << "A casa " << c1->getTitulo() << " foi registrada com sucesso." << endl;
                        }
                        break;
                    case 3:
                        {
                         cout <<("Por favor, digite as informações referentes ao apartamento.\n\n");
                        Apartamento *ap1 = new Apartamento();
                        Endereco ende = Endereco();
                        cout <<("Título do anúncio do apartamento:\n");
                        string vardescricao3;
                        cin.ignore();
                        getline(cin, vardescricao3);

                        ap1->setTitulo(vardescricao3);
                        cout <<("Descrição do apartamento:\n");
                        getline(cin, vardescricao3);

                        ap1->setDescricao(vardescricao3);
                        cout <<("Área do apartamento: \n");
                        double varareaapartamento;
                        cin >> varareaapartamento;
                        ap1->area = varareaapartamento;
                        cout <<("Número de quartos: \n");
                        int varnumeroquartos;
                        cin >> varnumeroquartos;
                        ap1->nquartos = varnumeroquartos;
                        cout <<("Posicao do apartamento: \n");
                        string varposicao;
                        cin.ignore();
                        getline(cin, varposicao);
                        ap1->posicao = varposicao;
                        cout <<("Andar do apartamento: \n");
                        int varandar;
                        cin >> varandar;
                        ap1->andar = varandar;
                        cout <<("Valor do condomínio do apartamento: \n");
                        double varvalorcondominio;
                        cin >> varvalorcondominio;
                        ap1->setValor(varvalorcondominio);
                        cout <<("Número de vagas na garagem do apartamento: \n");
                        int varnumerovagasgaragemapt;
                        cin >> varnumerovagasgaragemapt;
                        ap1->nvagasgaragem = varnumerovagasgaragemapt;
                        cout <<("O apartamento está para venda(1), ou para aluguel(2)? \n");
                        int varaouv1;
                        bool varaouv2;
                        cin >> varaouv1;
                        if(varaouv1 == 1){
                            varaouv2 = true;
                        }
                        else{
                            varaouv2 = false;
                        }
                        ap1->setAouV(varaouv2);
                        cout <<("Cidade do apartamento:\n");
                        string varcidade3;
                        cin.ignore();
                        getline(cin, varcidade3);

                        ende.cidade = varcidade3;
                        cout <<("Bairro do apartamento:\n");

                        string varbairro3;
                        getline(cin, varbairro3);
                        ende.bairro = varbairro3;

                        cout <<("Rua do apartamento:\n");
                        string varrua3;

                        getline(cin, varrua3);

                        ende.rua = varrua3;
                        cout <<("Número do apartamento na rua:\n");
                        int varnumero3;
                        cin >> varnumero3;
                        ende.numero = varnumero3;
                        cout <<("CEP do apartamento:\n");
                        string varcep3;
                        cin.ignore();
                        getline(cin, varcep3);
                        ende.cep = varcep3;
                        ap1->disponivel = true;
                        ap1->setEndereco(ende);
                        sist.cadastraImovel(ap1);
                        cout << "O apartamento " << ap1->getTitulo() << " foi registrado com sucesso." << endl;
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
                        cout << ("Busque o imóvel por título: \n");
                        string busca;
                        cin.ignore();
                        getline(cin, busca);

                        sist.buscaImovelTit(busca);
                        break;
                    }
                    case 2:{
                        cout << ("Busque o imóvel por bairro: \n");
                        string busca;
                        cin.ignore();
                        getline(cin, busca);

                        sist.buscaImovelBai(busca);
                        break;
                    }
                    case 3:{
                        cout << ("Busque o imóvel por cidade: \n");
                        string busca;
                        cin.ignore();
                        getline(cin, busca);

                        sist.buscaImovelCid(busca);
                        break;
                    }
                    case 4:{
                        cout << ("Digite o valor mínimo do imóvel a ser buscado (se não quiser valor mínimo, digite 0): \n");
                        int minimo;
                        cin >> minimo;
                        cout << ("Digite o valor máximo do imóvel (se não quiser valor máximo, digite 0): \n");

                        int maximo;
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
                        cout << ("Tipo de imóvel: 1 - TERRENO, 2 - CASA, 3 - APARTAMENTO") << endl;
                        int tipo;
                        cin >> tipo;
                        sist.mostraPorTipo(tipo);
                        break;
                    }
                    case 3:{
                        cout << "Ver o imóveis disponíveis para venda (1) ou para aluguel(2): " << endl;
                        bool seletor;
                        int seleint;
                        cin >> seleint;
                        if(seleint == 1){
                            seletor = true;
                        }else{
                            seletor = false;
                        }
                        sist.mostraAouV(seletor);
                        break;
                    }
                }
            }
            break;
            case 4:{//Editar
                cout << ("Busque o título do imóvel a ser atualizado: \n");
                string busca;
                cin.ignore();
                getline(cin, busca);
                int tipo;
                cout << ("Digite o tipo do imóvel") << endl;
                cout << "1-Terreno   2-Casa   3-Apartamento\n";
                cin >> tipo;
                sist.atualizaImovel(busca, tipo); //já contém os inputs do case 4: EDITAR
            }
            break;
            case 5:{//Deletar
                cout << ("Busque o título do imóvel a ser deletado: \n");
                string busca;
                cin.ignore();
                getline(cin, busca);
                sist.removeImovel(busca);
            }
            break;
            case 6:{//Sair
                fstream arquivo;
                arquivo.open("lista.txt",  ios::out | ios::trunc);
                for(int i=0; sist.imovs.size(); i++){
                    if(!sist.imovs[i]->disponivel){
                        continue;
                    }
                    arquivo << sist.imovs[i]->getTipo() << endl;
                    arquivo << sist.imovs[i]->getTitulo() << endl;
                    arquivo << sist.imovs[i]->getDescricao() << endl;
                    arquivo << sist.imovs[i]->getAouV() << endl;
                    arquivo << sist.imovs[i]->getValor() << endl;
                    arquivo << sist.imovs[i]->getEndereco().bairro << endl;
                    arquivo << sist.imovs[i]->getEndereco().cep << endl;
                    arquivo << sist.imovs[i]->getEndereco().cidade << endl;
                    arquivo << sist.imovs[i]->getEndereco().numero << endl;
                    arquivo << sist.imovs[i]->getEndereco().rua << endl;
                    if(sist.imovs[i]->getTipo() == 1){
                        arquivo << ((Terreno *)sist.imovs[i])->area << endl;
                    }
                    if(sist.imovs[i]->getTipo() == 2){
                        arquivo << ((Casa *)sist.imovs[i])->areaConst << endl;
                        arquivo << ((Casa *)sist.imovs[i])->areaTer << endl;
                        arquivo << ((Casa *)sist.imovs[i])->numPavimen << endl;
                        arquivo << ((Casa *)sist.imovs[i])->numQuartos << endl;
                    }
                    if(sist.imovs[i]->getTipo() == 3){
                        arquivo << ((Apartamento *)sist.imovs[i])->andar << endl;
                        arquivo << ((Apartamento *)sist.imovs[i])->area << endl;
                        arquivo << ((Apartamento *)sist.imovs[i])->nquartos << endl;
                        arquivo << ((Apartamento *)sist.imovs[i])->nvagasgaragem << endl;
                        arquivo << ((Apartamento *)sist.imovs[i])->posicao << endl;
                    }
                }
                arquivo.close();
            }
            break;

        }
    }
return 0;
}
