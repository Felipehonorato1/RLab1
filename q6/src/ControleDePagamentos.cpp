#include "ControleDePagamentos.h"
#include "Pagamento.h"
#define N 50

ControleDePagamentos::ControleDePagamentos()
{
}


double ControleDePagamentos::CalculaTotalPagamentos(){
    double soma = 0;
    for(int j=0;j<N;j++){
    soma = soma + pagamentos[j].getValor();
    }
    return soma;
}
bool ControleDePagamentos::ExisteFuncionario(string c){
    for(int i=0;i<N;i++){
        string cd = pagamentos[i].getNome();
        if(cd == c)
            return true;


    }
        return false;
}

void ControleDePagamentos::SetPagamento(Pagamento d,int i){
    pagamentos[i] = d;
}

void ControleDePagamentos::ExibeFolha(){

    for(int i=0;i<N;i++){
        string cd = pagamentos[i].getNome();
        if(cd.size()>3){
            cout << "NOME: "<<pagamentos[i].getNome()<< " SALARIO: " <<pagamentos[i].getValor()<< endl;
        }
    }
}
