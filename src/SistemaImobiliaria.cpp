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
}
