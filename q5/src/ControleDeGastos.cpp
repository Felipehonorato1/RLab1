#include "ControleDeGastos.h"
#include <string>
#include <iostream>
#define N 50

using namespace std;

ControleDeGastos::ControleDeGastos(){
}


    void ControleDeGastos::SetDespesas(Despesa d, int pos){
        despesas[pos] = d;
    }

    bool ControleDeGastos::ExisteDespesaTipo(string c){
        for(int i=0;i<N;i++){
        string a = despesas[i].getTipo();
        if(a == c) return 1;

    }
        return 0;
    }

    double ControleDeGastos::CalculaTotalDespesa(){
        double soma = 0;

        for(int a=0;a<N;a++){
            double cd = despesas[a].getValor();
            if(cd > 0) soma = soma + cd;
        }
        return soma;
    }

