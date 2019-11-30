#include "Pagamento.h"
#include <iostream>

Pagamento::Pagamento()
{
    nomeDoFuncionario = "x";
    valorPagamento = 0;
}


void Pagamento::setValor(double v){
    if(v > 0) valorPagamento = v;
    else cout << "Valor invalido" << endl;
}
void Pagamento::setNome(string c){
    if(c.size() > 3) nomeDoFuncionario = c;
    else cout << "Nome valido" << endl;
}


string Pagamento::getNome(){
    return nomeDoFuncionario;
}
double Pagamento::getValor(){
    return valorPagamento;
}
