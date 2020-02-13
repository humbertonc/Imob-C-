#include "SistemaImobiliaria.h"
#include <iostream>
#include "stdio.h"
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

SistemaImobiliaria::SistemaImobiliaria()
{
    int i;

    for(i = 0; i < 100; i++){
        terrenos[i].disponivel = 1;
        casas[i].disponivel = 1;
        apartamentos[i].disponivel = 1;
    }
}

void SistemaImobiliaria::cadastraImovel(Imovel *iv)
{
    imovs.push_back(*iv);
}

void SistemaImobiliaria::ImprimeTerreno(Terreno ter, int num)
{
        cout << num << ": " << ter.getTitulo() << "\n" <<endl;
        cout << "Descrição: " << ter.getDescricao() << endl;
        cout << "Valor: " << ter.getValor() << endl;
        if(ter.getAouV()){
        cout << "Disponível para venda" << endl;
        }else{
        cout << "Disponível para aluguel" << endl;
        }
        cout << "Área: " << ter.area << endl;

        cout << "   Endereco:" << endl;
        cout << "Rua: " << ter.getEndereco().rua << endl;
        cout << "Número: " << ter.getEndereco().numero << endl;
        cout << "CEP: " << ter.getEndereco().cep << endl;
        cout << "Bairro: " << ter.getEndereco().bairro << endl;
        cout << "Cidade: " << ter.getEndereco().cidade << endl;
        cout << "\n" << endl;
}

void SistemaImobiliaria::ImprimeCasa(Casa cas, int num)
{
        cout << num << ": " << cas.getTitulo() << "\n" <<endl;
        cout << "Descrição: " << cas.getDescricao() << endl;
        cout << "Valor: " << cas.getValor() << endl;
        if(cas.getAouV()){
        cout << "Disponível para venda" << endl;
        }else{
        cout << "Disponível para aluguel" << endl;
        }
        cout << "Área do terreno: " << cas.areaTer << endl;
        cout << "Área construída: " << cas.areaConst << endl;
        cout << "Número de pavimentos: " << cas.numPavimen << endl;
        cout << "Número de quartos: " << cas.numQuartos << endl;

        cout << "   Endereco:" << endl;
        cout << "Rua: " << cas.getEndereco().rua << endl;
        cout << "Número: " << cas.getEndereco().numero << endl;
        cout << "CEP: " << cas.getEndereco().cep << endl;
        cout << "Bairro: " << cas.getEndereco().bairro << endl;
        cout << "Cidade: " << cas.getEndereco().cidade << endl;
        cout << "\n" << endl;
}

void SistemaImobiliaria::ImprimeApartamento(Apartamento apt, int num)
{
        cout << num << ": " << apt.getTitulo() << "\n" <<endl;
        cout << "Descrição: " << apt.getDescricao() << endl;
        cout << "Valor: " << apt.getValor() << endl;
        if(apt.getAouV()){
        cout << "Disponível para venda" << endl;
        }else{
        cout << "Disponível para aluguel" << endl;
        }
        cout << "Área: " << apt.area << endl;
        cout << "Andar: " << apt.andar << endl;
        cout << "Número de vagas na garagem: " << apt.nvagasgaragem << endl;
        cout << "Número de quartos: " << apt.nquartos << endl;
        cout << "Posição do apartamento: " << apt.posicao << endl;

        cout << "   Endereco:" << endl;
        cout << "Rua: " << apt.getEndereco().rua << endl;
        cout << "Número: " << apt.getEndereco().numero << endl;
        cout << "CEP: " << apt.getEndereco().cep << endl;
        cout << "Bairro: " << apt.getEndereco().bairro << endl;
        cout << "Cidade: " << apt.getEndereco().cidade << endl;
        cout << "\n" << endl;
}

void SistemaImobiliaria::mostraTodos()
{
    int i, j = 1;

    cout << "========= TERRENOS ========" << endl;
    cout << endl;
    for(i = 0; imovs.size(); i++){
        if(!imovs[i].disponivel || imovs[i].getTipo() != 1){
            continue;
        }
        ImprimeTerreno(imovs[i], j);
        j++;
    }

    cout << "========= CASAS ========" << endl;
    cout << endl;
    j = 1;
    for(i = 0; i < 100; i++){
        if(!imovs[i].disponivel || imovs[i].getTipo() != 2){
            continue;
        }

        ImprimeCasa(imovs[i], j + 1);
        j++;
    }

    cout << "========= APARTAMENTOS ========" << endl;
    cout << endl;
    j = 1;
    for(i = 0; i < 100; i++){
        if(!imovs[i].disponivel || imovs[i].getTipo() != 3){
            continue;
        }

        ImprimeApartamento(imovs[i], j + 1);
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
        for(i = 0; imovs.size(); i++){
            if(!imovs[i].disponivel || imovs[i].getTipo() != 1){
                continue;
            }
            ImprimeTerreno(imovs[i], j);
            j++;
        }
        break;

        case 2:
    
        cout << "========= CASAS ========" << endl;
        cout << endl;

        for(i = 0; i < 100; i++){
        if(!imovs[i].disponivel || imovs[i].getTipo() != 2){
            continue;
        }

        ImprimeCasa(imovs[i], j + 1);
        j++;
        }

        case 3:

        cout << "========= APARTAMENTOS ========" << endl;
        cout << endl;

        for(i = 0; i < 100; i++){
            if(!imovs[i].disponivel || imovs[i].getTipo() != 3){
                continue;
            }

            ImprimeApartamento(imovs[i], j + 1);
            j++;
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
    for(i = 0; imovs.size(); i++){
            if((!imovs[i].disponivel || imovs[i].getTipo() != 1) && (imovs[i].getAouV() != seletor)){
                continue;
            }
            ImprimeTerreno(imovs[i], j);
            j++;
    }


    cout << "========= CASAS ========" << endl;
    cout << endl;
    
    j = 1;
    
    for(i = 0; imovs.size(); i++){
            if((!imovs[i].disponivel || imovs[i].getTipo() != 2) && (imovs[i].getAouV() != seletor)){
                continue;
            }
            ImprimeCasa(imovs[i], j);
            j++;
    }

    cout << "========= APARTAMENTOS ========" << endl;
    cout << endl;
    j = 1;
    for(i = 0; imovs.size(); i++){
            if((!imovs[i].disponivel || imovs[i].getTipo() != 3) && (imovs[i].getAouV() != seletor)){
                continue;
            }
            ImprimeApartamento(imovs[i], j);
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

    for(i = 0; imovs.size(); i++)
    {

        minuscula = imovs[i].getTitulo();
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1 || !imovs[i].disponivel || imovs[i].getTipo() != 1){
            continue;
        }

        ImprimeTerreno(imovs[i], j);
        j++;
    }

    cout << "========= CASAS ========" << endl;
    cout << endl;
    j = 1;
    for(i = 0; imovs.size(); i++)
    {

        minuscula = imovs[i].getTitulo();
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1 || !imovs[i].disponivel || imovs[i].getTipo() != 2){
            continue;
        }

        ImprimeCasa(imovs[i], j);
        j++;
    }

    cout << "========= APARTAMENTOS ========" << endl;
    cout << endl;
    j = 1;
    for(i = 0; imovs.size(); i++)
    {

        minuscula = imovs[i].getTitulo();
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1 || !imovs[i].disponivel || imovs[i].getTipo() != 3){
            continue;
        }

        ImprimeApartamento(imovs[i], j);
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

    for(i = 0; imovs.size(); i++)
    {

        minuscula = imovs[i].getEndereco().bairro;
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1 || !imovs[i].disponivel || imovs[i].getTipo() != 1){
            continue;
        }

        ImprimeTerreno(imovs[i], j);
        j++
    }
    cout << "========= CASAS ========" << endl;
    cout << endl;
    j = 1;
    for(i = 0; imovs.size(); i++)
    {

        minuscula = imovs[i].getEndereco().bairro;
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1 || !imovs[i].disponivel || imovs[i].getTipo() != 2){
            continue;
        }

        ImprimeCasa(imovs[i], j);
        j++;
    }

    cout << "========= APARTAMENTOS ========" << endl;
    cout << endl;

    j = 1;
    for(i = 0; imovs.size(); i++)
    {

        minuscula = imovs[i].getEndereco().bairro;
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1 || !imovs[i].disponivel || imovs[i].getTipo() != 3){
            continue;
        }

        ImprimeApartamento(imovs[i], j);
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

    for(i = 0; imovs.size(); i++)
    {

        minuscula = imovs[i].getEndereco().cidade;
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1 || !imovs[i].disponivel || imovs[i].getTipo() != 1){
            continue;
        }

        ImprimeTerreno(imovs[i], j);
        j++
    }

    cout << "========= CASAS ========" << endl;
    cout << endl;
    j = 1;
    for(i = 0; imovs.size(); i++)
    {

        minuscula = imovs[i].getEndereco().cidade;
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1 || !imovs[i].disponivel || imovs[i].getTipo() != 2){
            continue;
        }

        ImprimeCasa(imovs[i], j);
        j++
    }

    cout << "========= APARTAMENTOS ========" << endl;
    cout << endl;
    j++;
    for(i = 0; imovs.size(); i++)
    {

        minuscula = imovs[i].getEndereco().cidade;
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1 || !imovs[i].disponivel || imovs[i].getTipo() != 3){
            continue;
        }

        ImprimeApartamento(imovs[i], j);
        j++
    }
}

void SistemaImobiliaria::buscaImovelPreco(int minimo, int maximo)
{
    int i, j = 1;

    cout << "========= TERRENOS ========" << endl;
    cout << endl;

    for(i = 0; imovs.size(); i++)
    {
        if(!imovs[i].disponivel || imovs[i].getTipo() != 1){
            continue;
        }
        if(imovs[i].getValor() < minimo && minimo != 0){
            continue;
        }
        if(imovs[i].getValor() > maximo && maximo != 0){
            continue;
        }

        ImprimeTerreno(imovs[i],j);
        j++;
    }

    cout << "========= CASAS ========" << endl;
    cout << endl;
    j = 1;
    for(i = 0; imovs.size(); i++)
    {
        if(!imovs[i].disponivel || imovs[i].getTipo() != 2){
            continue;
        }
        if(imovs[i].getValor() < minimo && minimo != 0){
            continue;
        }
        if(imovs[i].getValor() > maximo && maximo != 0){
            continue;
        }

        ImprimeCasa(imovs[i],j);
        j++;
    }

    cout << "========= APARTAMENTOS ========" << endl;
    cout << endl;

    j = 1;
    for(i = 0; imovs.size(); i++)
    {
        if(!imovs[i].disponivel || imovs[i].getTipo() != 3){
            continue;
        }
        if(imovs[i].getValor() < minimo && minimo != 0){
            continue;
        }
        if(imovs[i].getValor() > maximo && maximo != 0){
            continue;
        }

        ImprimeApartamento(imovs[i],j);
        j++;
    }
}
