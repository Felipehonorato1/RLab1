#include "Despesa.h"
#include <iostream>
#include <string>

using namespace std;

Despesa::Despesa(){
    valor = 0;
    tGasto = "x";
}

Despesa::Despesa(double a,string c){
    valor = a;
    tGasto = c;
}

void Despesa::setCaracteristicas(double a,string c){
    if(a < 0 || c.size() < 3) cout << "\tDados invalidos" << endl;
     valor = a;;
     tGasto = c;
}

double Despesa::getValor(){
    return valor;
}
string Despesa::getTipo(){
    return tGasto;
}
