#include "SistemaImobiliaria.h"
#include <iostream>
#include "stdio.h"
#include <string>
#include <algorithm>
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

void SistemaImobiliaria::cadastraTerreno(Terreno ter)
{
    int i;

    for(i = 0; terrenos[i].disponivel && i < 100; i++){
        terrenos[i] = ter;
        terrenos[i].disponivel = 0;
        break;
    }
}

void SistemaImobiliaria::cadastraCasa(Casa cas)
{
    int i;

    for(i = 0; casas[i].disponivel && i < 100; i++){
            casas[i] = cas;
            casas[i].disponivel = 0;
            break;
    }
}

void SistemaImobiliaria::cadastraApt(Apartamento apt)
{
     int i;

     for(i = 0; apartamentos[i].disponivel && i < 100; i++){
        apartamentos[i] = apt;
        apartamentos[i].disponivel = 0;
        break;
    }
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
    int i;

    cout << "========= TERRENOS ========" << endl;
    cout << endl;
    for(i = 0; i < 100; i++){
        if(!terrenos[i].disponivel){
            continue;
        }
        ImprimeTerreno(terrenos[i], i + 1);
    }

    cout << "========= CASAS ========" << endl;
    cout << endl;

    for(i = 0; i < 100; i++){
        if(!casas[i].disponivel){
            continue;
        }

        ImprimeCasa(casas[i], i + 1);
    }

    cout << "========= APARTAMENTOS ========" << endl;
    cout << endl;

    for(i = 0; i < 100; i++){
        if(!apartamentos[i].disponivel){
            continue;
        }

        ImprimeApartamento(apartamentos[i], i + 1);
    }
}

void SistemaImobiliaria::mostraPorTipo(int tipo)
{
    int i;

    switch(tipo){
        case 1:
        cout << "========= TERRENOS ========" << endl;
        cout << endl;
        for(i = 0; i < 100; i++){
            if(!terrenos[i].disponivel){
            continue;
            }

            ImprimeTerreno(terrenos[i], i + 1);

        }
        break;

        case 2:

        cout << "========= CASAS ========" << endl;
        cout << endl;

        for(i = 0; i < 100; i++){
            if(!casas[i].disponivel){
            continue;
            }

            ImprimeCasa(casas[i], i + 1);
        }
        break;

        case 3:

        cout << "========= APARTAMENTOS ========" << endl;
        cout << endl;

        for(i = 0; i < 100; i++){
            if(!apartamentos[i].disponivel){
            continue;
            }

            ImprimeApartamento(apartamentos[i], i + 1);
        }
        break;

        default:
        cout << "Opção inválida!" << endl;
    }
}

void SistemaImobiliaria::mostraAouV(bool seletor)
{
    int i;

    cout << "========= TERRENOS ========" << endl;
    cout << endl;
    for(i = 0; i < 100; i++){
        if(!terrenos[i].disponivel && (seletor != terrenos[i].getAouV())){
            continue;
        }

        ImprimeTerreno(terrenos[i], i + 1);

    }

    cout << "========= CASAS ========" << endl;
    cout << endl;

    for(i = 0; i < 100; i++){
        if(!casas[i].disponivel && (seletor != casas[i].getAouV())){
            continue;
        }

        ImprimeCasa(casas[i], i + 1);
    }

    cout << "========= APARTAMENTOS ========" << endl;
    cout << endl;

    for(i = 0; i < 100; i++){
        if(!apartamentos[i].disponivel && (seletor != apartamentos[i].getAouV())){
            continue;
        }

        ImprimeApartamento(apartamentos[i], i + 1);
    }
}

void SistemaImobiliaria::buscaImovelTit(string busca)
{
    string minuscula;
    int i;

    transform(busca.begin(), busca.end(), busca.begin(), ::tolower);

    cout << "========= TERRENOS ========" << endl;
    cout << endl;

    for(i = 0; i < 100; i++)
    {

        minuscula = terrenos[i].getTitulo();
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1){
            continue;
        }

        ImprimeTerreno(terrenos[i], i + 1);
    }

    cout << "========= CASAS ========" << endl;
    cout << endl;

    for(i = 0; i < 100; i++)
    {

        minuscula = casas[i].getTitulo();
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1){
            continue;
        }

        ImprimeCasa(casas[i], i + 1);
    }

    cout << "========= APARTAMENTOS ========" << endl;
    cout << endl;

    for(i = 0; i < 100; i++)
    {

        minuscula = apartamentos[i].getTitulo();
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1){
            continue;
        }

        ImprimeApartamento(apartamentos[i], i + 1);
    }
}

void SistemaImobiliaria::buscaImovelBai(string busca)
{
    string minuscula;
    int i;

    transform(busca.begin(), busca.end(), busca.begin(), ::tolower);

    cout << "========= TERRENOS ========" << endl;
    cout << endl;

    for(i = 0; i < 100; i++)
    {

        minuscula = terrenos[i].getEndereco().bairro;
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1){
            continue;
        }

        ImprimeTerreno(terrenos[i], i + 1);
    }

    cout << "========= CASAS ========" << endl;
    cout << endl;

    for(i = 0; i < 100; i++)
    {

        minuscula = casas[i].getEndereco().bairro;
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1){
            continue;
        }

        ImprimeCasa(casas[i], i + 1);
    }

    cout << "========= APARTAMENTOS ========" << endl;
    cout << endl;

    for(i = 0; i < 100; i++)
    {

        minuscula = apartamentos[i].getEndereco().bairro;
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1){
            continue;
        }

        ImprimeApartamento(apartamentos[i], i + 1);
    }
}

void SistemaImobiliaria::buscaImovelCid(string busca)
{
    string minuscula;
    int i;

    transform(busca.begin(), busca.end(), busca.begin(), ::tolower);

    cout << "========= TERRENOS ========" << endl;
    cout << endl;

    for(i = 0; i < 100; i++)
    {

        minuscula = terrenos[i].getEndereco().cidade;
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1){
            continue;
        }

        ImprimeTerreno(terrenos[i], i + 1);
    }

    cout << "========= CASAS ========" << endl;
    cout << endl;

    for(i = 0; i < 100; i++)
    {

        minuscula = casas[i].getEndereco().cidade;
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1){
            continue;
        }

        ImprimeCasa(casas[i], i + 1);
    }

    cout << "========= APARTAMENTOS ========" << endl;
    cout << endl;

    for(i = 0; i < 100; i++)
    {

        minuscula = apartamentos[i].getEndereco().cidade;
        transform(minuscula.begin(), minuscula.end(), minuscula.begin(), ::tolower);

        if(minuscula.find(busca) == -1){
            continue;
        }

        ImprimeApartamento(apartamentos[i], i + 1);
    }
}

void SistemaImobiliaria::buscaImovelPreco(int minimo, int maximo)
{
    int i;

    cout << "========= TERRENOS ========" << endl;
    cout << endl;

    for(i = 0; i < 100; i++)
    {

        if(terrenos[i].getValor() < minimo && minimo != 0){
            continue;
        }
        if(terrenos[i].getValor() > maximo && maximo != 0){
            continue;
        }

        ImprimeTerreno(terrenos[i], i + 1);
    }

    cout << "========= CASAS ========" << endl;
    cout << endl;

    for(i = 0; i < 100; i++)
    {

        if(casas[i].getValor() < minimo && minimo != 0){
            continue;
        }
        if(casas[i].getValor() > maximo && maximo != 0){
            continue;
        }

        ImprimeCasa(casas[i], i + 1);
    }

    cout << "========= APARTAMENTOS ========" << endl;
    cout << endl;

    for(i = 0; i < 100; i++)
    {

        if(apartamentos[i].getValor() < minimo && minimo != 0){
            continue;
        }
        if(apartamentos[i].getValor() > maximo && maximo != 0){
            continue;
        }

        ImprimeApartamento(apartamentos[i], i + 1);
    }
}
