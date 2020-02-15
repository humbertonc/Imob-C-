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
        ImprimeImovel(imovs[i], j);
        break;
        case 2:
        cout << "Tipo: Casa" << endl;
        ImprimeImovel(imovs[i], j);
        break;
        case 3:
        cout << "Tipo: Apartamento" << endl;
        ImprimeImovel(imovs[i], j);
        break;
        }

        j++;
    }

    cout << "\n\n" << endl;
    cout << "Digite o número do imóvel a ser removido" << endl;
    cin >> it;
    it--;

    imovs.erase(imovs.begin() + it);

    cout << "Imóvel removido com sucesso!" << endl;
}

void SistemaImobiliaria::atualizaImovel(string busca)
{
    int i, j = 1, it;
    string minuscula;

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

    cout << "\n\n" << endl;
    cout << "Digite o número do imóvel a ser atualizado" << endl;
    cin >> it;
    it--;

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
        cout << "Área: " << ((Terreno *)imv)->area << endl;
        break;

        case 2:
        cout << "Área do terreno: " << ((Casa *)imv)->areaTer << endl;
        cout << "Área construída: " << ((Casa *)imv)->areaConst << endl;
        cout << "Número de pavimentos: " << ((Casa *)imv)->numPavimen << endl;
        cout << "Número de quartos: " << ((Casa *)imv)->numQuartos << endl;
        break;

        case 3:
        cout << "Área: " << ((Apartamento *)imv)->area << endl;
        cout << "Andar: " << ((Apartamento *)imv)->andar << endl;
        cout << "Número de vagas na garagem: " << ((Apartamento *)imv)->nvagasgaragem << endl;
        cout << "Número de quartos: " << ((Apartamento *)imv)->nquartos << endl;
        cout << "Posição do apartamento: " << ((Apartamento *)imv)->posicao << endl;
        break;
        }

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
        ImprimeImovel(imovs[i], j);
        j++;
    }

    cout << "========= CASAS ========" << endl;
    cout << endl;
    j = 1;
    for(i = 0; i < imovs.size(); i++){
        if(!imovs[i]->disponivel || imovs[i]->getTipo() != 2){
            continue;
        }

        ImprimeImovel(imovs[i], j + 1);
        j++;
    }

    cout << "========= APARTAMENTOS ========" << endl;
    cout << endl;
    j = 1;
    for(i = 0; i < imovs.size(); i++){
        if(!imovs[i]->disponivel || imovs[i]->getTipo() != 3){
            continue;
        }

        ImprimeImovel(imovs[i], j + 1);
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

        ImprimeImovel(imovs[i], j + 1);
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

            ImprimeImovel(imovs[i], j + 1);
            j++;
        break;
        }

        default:
        cout << "Opção inválida!" << endl;
    }
}

void SistemaImobiliaria::mostraAouV(bool seletor)
{
    int i, j = 1;

    cout << "========= TERRENOS ========" << endl;
    cout << endl;
    for(i = 0; i < imovs.size(); i++){
            if((!imovs[i]->disponivel || imovs[i]->getTipo() != 1) && (imovs[i]->getAouV() != seletor)){
                continue;
            }
            ImprimeImovel(imovs[i], j);
            j++;
    }


    cout << "========= CASAS ========" << endl;
    cout << endl;

    j = 1;

    for(i = 0; i < imovs.size(); i++){
            if((!imovs[i]->disponivel || imovs[i]->getTipo() != 2) && (imovs[i]->getAouV() != seletor)){
                continue;
            }
            ImprimeImovel(imovs[i], j);
            j++;
    }

    cout << "========= APARTAMENTOS ========" << endl;
    cout << endl;
    j = 1;
    for(i = 0; i < imovs.size(); i++){
            if((!imovs[i]->disponivel || imovs[i]->getTipo() != 3) && (imovs[i]->getAouV() != seletor)){
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
