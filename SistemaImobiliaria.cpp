#include "SistemaImobiliaria.h"
#include <iostream>
#include "stdio.h"
#include <string>
using namespace std;

SistemaImobiliaria::SistemaImobiliaria()
{
    int i;

    for(i = 0; i < 100; i++){
        terrenos[i].disponivel = 0;
        casas[i].disponivel = 0;
        apartamentos[i].disponivel = 0;
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

void SistemaImobiliaria::mostraTodos()
{
    int i;

    cout << "========= TERRENOS ========" << endl;
    cout << endl;
    for(i = 0; i < 100; i++){
        if(!terrenos[i].disponivel){
            continue;
        }

        cout << i + 1 << ": " << terrenos[i].getTitulo() << "\n" <<endl;
        cout << "Descrição: " << terrenos[i].getDescricao() << endl;
        cout << "Valor: " << terrenos[i].getValor() << endl;
        if(terrenos[i].getAouV()){
        cout << "Disponível para venda" << endl;
        }else{
        cout << "Disponível para aluguel" << endl;
        }
        cout << "Área: " << terrenos[i].area << endl;

        cout << "   Endereco:" << endl;
        cout << "Rua: " << terrenos[i].getEndereco().rua << endl;
        cout << "Número: " << terrenos[i].getEndereco().numero << endl;
        cout << "CEP: " << terrenos[i].getEndereco().cep << endl;
        cout << "Bairro: " << terrenos[i].getEndereco().bairro << endl;
        cout << "Cidade: " << terrenos[i].getEndereco().cidade << endl;
        cout << "\n" << endl;
    }
    
    for(i = 0; i < 100; i++){
        if(!casas[i].disponivel){
            continue;
        }

        cout << i + 1 << ": " << casas[i].getTitulo() << "\n" <<endl;
        cout << "Descrição: " << casas[i].getDescricao() << endl;
        cout << "Valor: " << casas[i].getValor() << endl;
        if(casas[i].getAouV()){
        cout << "Disponível para venda" << endl;
        }else{
        cout << "Disponível para aluguel" << endl;
        }
        cout << "Área do terreno: " << casas[i].areaTer << endl;
        cout << "Área construída: " << casas[i].areaConst << endl;
        cout << "Número de pavimentos: " << casas[i].numPavimen << endl;
        cout << "Número de quartos: " << casas[i].numQuartos << endl;

        cout << "   Endereco:" << endl;
        cout << "Rua: " << casas[i].getEndereco().rua << endl;
        cout << "Número: " << casas[i].getEndereco().numero << endl;
        cout << "CEP: " << casas[i].getEndereco().cep << endl;
        cout << "Bairro: " << casas[i].getEndereco().bairro << endl;
        cout << "Cidade: " << casas[i].getEndereco().cidade << endl;
        cout << "\n" << endl;
    }
    
    for(i = 0; i < 100; i++){
        if(!apartamentos[i].disponivel){
            continue;
        }

        cout << i + 1 << ": " << apartamentos[i].getTitulo() << "\n" <<endl;
        cout << "Descrição: " << apartamentos[i].getDescricao() << endl;
        cout << "Valor: " << apartamentos[i].getValor() << endl;
        if(apartamentos[i].getAouV()){
        cout << "Disponível para venda" << endl;
        }else{
        cout << "Disponível para aluguel" << endl;
        }
        cout << "Área: " << apartamentos[i].area << endl;
        cout << "Andar: " << apartamentos[i].andar << endl;
        cout << "Número de vagas na garagem: " << apartamentos[i].nvagasgaragem << endl;
        cout << "Número de quartos: " << apartamentos[i].numQuartos << endl;
        cout << "Posição do apartamento: " << apartamentos[i].posicao << endl;

        cout << "   Endereco:" << endl;
        cout << "Rua: " << apartamentos[i].getEndereco().rua << endl;
        cout << "Número: " << apartamentos[i].getEndereco().numero << endl;
        cout << "CEP: " << apartamentos[i].getEndereco().cep << endl;
        cout << "Bairro: " << apartamentos[i].getEndereco().bairro << endl;
        cout << "Cidade: " << apartamentos[i].getEndereco().cidade << endl;
        cout << "\n" << endl;
    }
}
