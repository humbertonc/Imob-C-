#include "SistemaImobiliaria.h"
#include <iostream>
#include "stdio.h"
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

SistemaImobiliaria::SistemaImobiliaria()
{

}

void SistemaImobiliaria::cadastraImovel(Imovel *iv)
{
    imovs.push_back(iv);
}

void SistemaImobiliaria::removeImovel(string busca)
{
    int i, j = 1, it, continuadas = 0;
    string minuscula;

    transform(busca.begin(), busca.end(), busca.begin(), ::tolower);

    for(i = 0; i < imovs.size(); i++)
    {

        minuscula = imovs[i]->getTitulo();
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1 || !imovs[i]->disponivel){
            continuadas++;
            continue;
        }

        switch(imovs[i]->getTipo()){
        case 1:
        cout << "Tipo: Terreno" << endl;
        ImprimeImovel(imovs[i], i+1);
        cout << endl;
        break;
        case 2:
        cout << "Tipo: Casa" << endl;
        ImprimeImovel(imovs[i], i+1);
        cout << endl;
        break;
        case 3:
        cout << "Tipo: Apartamento" << endl;
        ImprimeImovel(imovs[i], i+1);
        cout << endl;
        break;
        }
    }

    cout << "Digite o número do imóvel a ser removido\n" << endl;
    cin >> it;
    it--;
    imovs[it]->disponivel = false;
    imovs.erase(imovs.begin() + it);

    cout << "Imóvel removido com sucesso!\n" << endl;
}

void SistemaImobiliaria::atualizaImovel(string busca, int tipo)
{
    int i, it;
    string minuscula;

        transform(busca.begin(), busca.end(), busca.begin(), ::tolower);
    switch(tipo){
    case 1:{
    cout << "========= TERRENOS ========" << endl;
    cout << endl;

    for(i = 0; i < imovs.size(); i++)
    {

        minuscula = imovs[i]->getTitulo();
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1 || !imovs[i]->disponivel || imovs[i]->getTipo() != 1){
            continue;
        }

        ImprimeImovel(imovs[i], i+1);
        cout << "" << endl;
    }
        cout << "Digite o número do terreno a ser atualizado" << endl;
        cin >> it;
        it--;
        Terreno *t1 =  new Terreno();
        Endereco ende1 = Endereco();
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

                ende1.cidade = varcidade;
                cout <<("Bairro do terreno:\n");
                string varbairro;
                getline(cin, varbairro);

                ende1.bairro = varbairro;
                cout <<("Rua do terreno:\n");
                string varrua;

                getline(cin, varrua);

                ende1.rua = varrua;
                cout <<("Número do terreno na rua:\n");
                int varnumero;
                cin >> varnumero;
                ende1.numero = varnumero;
                cout <<("CEP do terreno:\n");
                string varcep;
                cin.ignore();
                getline(cin, varcep);

                ende1.cep = varcep;
                t1->disponivel = true;
                t1->setEndereco(ende1);
                imovs[it]->disponivel = false;
                imovs[it] = t1;
    }
        break;
    case 2:{
    cout << "========= CASAS ========" << endl;
    cout << endl;

    for(i = 0; i < imovs.size(); i++)
    {

        minuscula = imovs[i]->getTitulo();
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1 || !imovs[i]->disponivel || imovs[i]->getTipo() != 2){
            continue;
        }

        ImprimeImovel(imovs[i], i+1);
        cout << "" << endl;
    }
        cout << "Digite o número do imóvel a ser atualizado" << endl;
        cin >> it;
        it--;
        Casa *c1 = new Casa();
        Endereco ende2 = Endereco();

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

        ende2.cidade = varcidade2;
        cout <<("Bairro da casa:\n");
        string varbairro2;

        getline(cin, varbairro2);

        ende2.bairro = varbairro2;
        cout <<("Rua da casa:\n");
        string varrua2;

        getline(cin, varrua2);

        ende2.rua = varrua2;
        cout <<("Número da casa na rua:\n");
        int varnumero2;
        cin >> varnumero2;
        ende2.numero = varnumero2;
        cout <<("CEP da casa:\n");
        string varcep2;
        cin.ignore();
        getline(cin, varcep2);

        ende2.cep = varcep2;
        c1->disponivel = true;
        c1->setEndereco(ende2);

        imovs[it]->disponivel = false;
        imovs[it] = c1;

    break;
    }
    case 3:
    cout << "========= APARTAMENTOS ========" << endl;
    cout << endl;

    for(i = 0; i < imovs.size(); i++)
    {

        minuscula = imovs[i]->getTitulo();
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1 || !imovs[i]->disponivel || imovs[i]->getTipo() != 3){
            continue;
        }

        ImprimeImovel(imovs[i], i+1);

        cout << "" << endl;
    }
        cout << "Digite o número do imóvel a ser atualizado" << endl;
        cin >> it;
        it--;
        Apartamento *ap1 = new Apartamento();
        Endereco ende3 = Endereco();

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

        ende3.cidade = varcidade3;
        cout <<("Bairro do apartamento:\n");

        string varbairro3;
        getline(cin, varbairro3);
        ende3.bairro = varbairro3;

        cout <<("Rua do apartamento:\n");
        string varrua3;

        getline(cin, varrua3);

        ende3.rua = varrua3;
        cout <<("Número do apartamento na rua:\n");
        int varnumero3;
        cin >> varnumero3;
        ende3.numero = varnumero3;
        cout <<("CEP do apartamento:\n");
        string varcep3;
        cin.ignore();
        getline(cin, varcep3);
        ende3.cep = varcep3;
        ap1->disponivel = true;
        ap1->setEndereco(ende3);

        imovs[it]->disponivel = false;
        imovs[it] = ap1;

    break;
    }

    cout << "Imóvel atualizado com sucesso!" << endl;
}

void SistemaImobiliaria::ImprimeImovel(Imovel *imv, int num)
{
        cout << num << ": " << imv->getTitulo() << "\n" <<endl;
        cout << "Descrição: " << imv->getDescricao() << endl;
        cout << "Valor: " << imv->getValor() << endl;
        if(imv->getAouV()){
        cout << "Disponível para venda" << endl;
        }else{
        cout << "Disponível para aluguel" << endl;
        }

        cout << "   Endereco:" << endl;
        cout << "Rua: " << imv->getEndereco().rua << endl;
        cout << "Número: " << imv->getEndereco().numero << endl;
        cout << "CEP: " << imv->getEndereco().cep << endl;
        cout << "Bairro: " << imv->getEndereco().bairro << endl;
        cout << "Cidade: " << imv->getEndereco().cidade << endl;

        switch(imv->getTipo()){
        case 1:
        cout << "Área: " << ((Terreno *)imv)->area << "\n\n" <<endl;
        break;

        case 2:
        cout << "Área do terreno: " << ((Casa *)imv)->areaTer << endl;
        cout << "Área construída: " << ((Casa *)imv)->areaConst << endl;
        cout << "Número de pavimentos: " << ((Casa *)imv)->numPavimen << endl;
        cout << "Número de quartos: " << ((Casa *)imv)->numQuartos <<"\n\n"<< endl;
        break;

        case 3:
        cout << "Área: " << ((Apartamento *)imv)->area << endl;
        cout << "Andar: " << ((Apartamento *)imv)->andar << endl;
        cout << "Número de vagas na garagem: " << ((Apartamento *)imv)->nvagasgaragem << endl;
        cout << "Número de quartos: " << ((Apartamento *)imv)->nquartos << endl;
        cout << "Posição do apartamento: " << ((Apartamento *)imv)->posicao <<"\n\n"<< endl;
        break;
        }

}

void SistemaImobiliaria::ImprimeImovelRed(Imovel *imv, int num)
{
        cout << num << ": " << imv->getTitulo() << "\n" <<endl;
        cout << "Valor: " << imv->getValor() << endl;
        cout << "Bairro: " << imv->getEndereco().bairro << endl;
        cout << "Cidade: " << imv->getEndereco().cidade<<"\n\n" << endl;
}

void SistemaImobiliaria::mostraTodos()
{
    int i, j = 1;

    cout << "========= TERRENOS ========" << endl;
    cout << endl;
    for(i = 0; i < imovs.size(); i++){
        if(!imovs[i]->disponivel || imovs[i]->getTipo() != 1){
            continue;
        }
        ImprimeImovelRed(imovs[i], j);
        j++;
    }

    cout << "========= CASAS ========" << endl;
    cout << endl;
    j = 1;
    for(i = 0; i < imovs.size(); i++){
        if(!imovs[i]->disponivel || imovs[i]->getTipo() != 2){
            continue;
        }

        ImprimeImovelRed(imovs[i], j);
        j++;
    }

    cout << "========= APARTAMENTOS ========" << endl;
    cout << endl;
    j = 1;
    for(i = 0; i < imovs.size(); i++){
        if(!imovs[i]->disponivel || imovs[i]->getTipo() != 3){
            continue;
        }

        ImprimeImovelRed(imovs[i], j);
        j++;
    }
}

void SistemaImobiliaria::mostraPorTipo(int tipo)
{
    int i, j = 1;

    switch(tipo){
        case 1:
        cout << "========= TERRENOS ========" << endl;
        cout << endl;
        for(i = 0; i < imovs.size(); i++){
            if(!imovs[i]->disponivel || imovs[i]->getTipo() != 1){
                continue;
            }
            ImprimeImovel(imovs[i], j);
            j++;
        }
        break;

        case 2:

        cout << "========= CASAS ========" << endl;
        cout << endl;

        for(i = 0; i < imovs.size(); i++){
        if(!imovs[i]->disponivel || imovs[i]->getTipo() != 2){
            continue;
        }

        ImprimeImovel(imovs[i], j);
        j++;
        }
        break;

        case 3:

        cout << "========= APARTAMENTOS ========" << endl;
        cout << endl;

        for(i = 0; i < imovs.size(); i++){
            if(!imovs[i]->disponivel || imovs[i]->getTipo() != 3){
                continue;
            }

            ImprimeImovel(imovs[i], j);
            j++;
        break;
        }

    }
}

void SistemaImobiliaria::mostraAouV(bool seletor)
{
    int i, j = 1;

    cout << "========= TERRENOS ========" << endl;
    cout << endl;
    for(i = 0; i < imovs.size(); i++){
            if((!imovs[i]->disponivel || imovs[i]->getTipo() != 1) || (imovs[i]->getAouV() != seletor)){
                continue;
            }
            ImprimeImovel(imovs[i], j);
            j++;
    }


    cout << "========= CASAS ========" << endl;
    cout << endl;

    j = 1;

    for(i = 0; i < imovs.size(); i++){
            if((!imovs[i]->disponivel || imovs[i]->getTipo() != 2) || (imovs[i]->getAouV() != seletor)){
                continue;
            }
            ImprimeImovel(imovs[i], j);
            j++;
    }

    cout << "========= APARTAMENTOS ========" << endl;
    cout << endl;
    j = 1;
    for(i = 0; i < imovs.size(); i++){
            if((!imovs[i]->disponivel || imovs[i]->getTipo() != 3) || (imovs[i]->getAouV() != seletor)){
                continue;
            }
            ImprimeImovel(imovs[i], j);
            j++;
    }
}

void SistemaImobiliaria::buscaImovelTit(string busca)
{
    string minuscula;
    int i, j = 1;

    transform(busca.begin(), busca.end(), busca.begin(), ::tolower);

    cout << "========= TERRENOS ========" << endl;
    cout << endl;

    for(i = 0; i < imovs.size(); i++)
    {

        minuscula = imovs[i]->getTitulo();
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1 || !imovs[i]->disponivel || imovs[i]->getTipo() != 1){
            continue;
        }

        ImprimeImovel(imovs[i], j);
        j++;
    }

    cout << "========= CASAS ========" << endl;
    cout << endl;
    j = 1;
    for(i = 0; i < imovs.size(); i++)
    {

        minuscula = imovs[i]->getTitulo();
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1 || !imovs[i]->disponivel || imovs[i]->getTipo() != 2){
            continue;
        }

        ImprimeImovel(imovs[i], j);
        j++;
    }

    cout << "========= APARTAMENTOS ========" << endl;
    cout << endl;
    j = 1;
    for(i = 0; i < imovs.size(); i++)
    {

        minuscula = imovs[i]->getTitulo();
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1 || !imovs[i]->disponivel || imovs[i]->getTipo() != 3){
            continue;
        }

        ImprimeImovel(imovs[i], j);
        j++;
    }
}

void SistemaImobiliaria::buscaImovelBai(string busca)
{
    string minuscula;
    int i, j = 1;

    transform(busca.begin(), busca.end(), busca.begin(), ::tolower);

    cout << "========= TERRENOS ========" << endl;
    cout << endl;

    for(i = 0; i < imovs.size(); i++)
    {

        minuscula = imovs[i]->getEndereco().bairro;
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1 || !imovs[i]->disponivel || imovs[i]->getTipo() != 1){
            continue;
        }

        ImprimeImovel(imovs[i], j);
        j++;
    }
    cout << "========= CASAS ========" << endl;
    cout << endl;
    j = 1;
    for(i = 0; i < imovs.size(); i++)
    {

        minuscula = imovs[i]->getEndereco().bairro;
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1 || !imovs[i]->disponivel || imovs[i]->getTipo() != 2){
            continue;
        }

        ImprimeImovel(imovs[i], j);
        j++;
    }

    cout << "========= APARTAMENTOS ========" << endl;
    cout << endl;

    j = 1;
    for(i = 0; i < imovs.size(); i++)
    {

        minuscula = imovs[i]->getEndereco().bairro;
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1 || !imovs[i]->disponivel || imovs[i]->getTipo() != 3){
            continue;
        }

        ImprimeImovel(imovs[i], j);
        j++;
    }
}

void SistemaImobiliaria::buscaImovelCid(string busca)
{
    string minuscula;
    int i, j = 1;

    transform(busca.begin(), busca.end(), busca.begin(), ::tolower);

    cout << "========= TERRENOS ========" << endl;
    cout << endl;

    for(i = 0; i < imovs.size(); i++)
    {

        minuscula = imovs[i]->getEndereco().cidade;
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1 || !imovs[i]->disponivel || imovs[i]->getTipo() != 1){
            continue;
        }

        ImprimeImovel(imovs[i], j);
        j++;
    }

    cout << "========= CASAS ========" << endl;
    cout << endl;
    j = 1;
    for(i = 0; i < imovs.size(); i++)
    {

        minuscula = imovs[i]->getEndereco().cidade;
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1 || !imovs[i]->disponivel || imovs[i]->getTipo() != 2){
            continue;
        }

        ImprimeImovel(imovs[i], j);
        j++;
    }

    cout << "========= APARTAMENTOS ========" << endl;
    cout << endl;
    j++;
    for(i = 0; i < imovs.size(); i++)
    {

        minuscula = imovs[i]->getEndereco().cidade;
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1 || !imovs[i]->disponivel || imovs[i]->getTipo() != 3){
            continue;
        }

        ImprimeImovel(imovs[i], j);
        j++;
    }
}

void SistemaImobiliaria::buscaImovelPreco(int minimo, int maximo)
{
    int i, j = 1;

    cout << "========= TERRENOS ========" << endl;
    cout << endl;

    for(i = 0; i < imovs.size(); i++)
    {
        if(!imovs[i]->disponivel || imovs[i]->getTipo() != 1){
            continue;
        }
        if(imovs[i]->getValor() < minimo && minimo != 0){
            continue;
        }
        if(imovs[i]->getValor() > maximo && maximo != 0){
            continue;
        }

        ImprimeImovel(imovs[i],j);
        j++;
    }

    cout << "========= CASAS ========" << endl;
    cout << endl;
    j = 1;
    for(i = 0; i < imovs.size(); i++)
    {
        if(!imovs[i]->disponivel || imovs[i]->getTipo() != 2){
            continue;
        }
        if(imovs[i]->getValor() < minimo && minimo != 0){
            continue;
        }
        if(imovs[i]->getValor() > maximo && maximo != 0){
            continue;
        }

        ImprimeImovel(imovs[i],j);
        j++;
    }

    cout << "========= APARTAMENTOS ========" << endl;
    cout << endl;

    j = 1;
    for(i = 0; i < imovs.size(); i++)
    {
        if(!imovs[i]->disponivel || imovs[i]->getTipo() != 3){
            continue;
        }
        if(imovs[i]->getValor() < minimo && minimo != 0){
            continue;
        }
        if(imovs[i]->getValor() > maximo && maximo != 0){
            continue;
        }

        ImprimeImovel(imovs[i],j);
        j++;
    }
}
