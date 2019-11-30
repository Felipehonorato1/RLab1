#include <iostream>
#include "Despesa.h"
#include "ControleDeGastos.h"
#include <string>
#define N 50


using namespace std;

void MenuDespesas(){
    cout << "________________________________________________"<< endl;
    cout << "\t[1] ADICIONAR DESPESA" << endl;
    cout << "\t[2] CALCULAR TOTAL" << endl;
    cout << "\t[3] PESQUISAR DESPESA" << endl;
    cout << "\t[4] SAIR" << endl;
    cout << "________________________________________________"<< endl;
}

int main()
{
    double as;
    ControleDeGastos cg;
    Despesa desp = Despesa();
    int op = 0;
    string nome;
    double valor;
    bool cd;
    int iter = 0;

    while(1){
        MenuDespesas();
        cout << "\tSELECIONE UMA OPCAO: ";
        cin >> op;
        switch(op){
    case 1:
        cout << " \tTIPO DE GASTO: " ;
        cin >> nome;
        cout << "\tVALOR: " ;
        cin >> valor;
        desp.setCaracteristicas(valor,nome);
        cg.SetDespesas(desp,iter);
        iter++;
        break;

    case 2:
        as = cg.CalculaTotalDespesa();
        cout << "\tVALOR TOTAL= " << as << endl;
        break;

    case 3:
    cout << "\tNOME DE PESQUISA: ";
    cin >> nome;
    cd = cg.ExisteDespesaTipo(nome);
    cout << "\t" << cd << endl;
    break;

    case 4:
        return 1;
        break;
    default:
        cout << "\tVALOR INVALIDO" << endl;
        break;
        }
    }
    return 0;
}
