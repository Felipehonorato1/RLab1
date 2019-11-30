#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"
#include <iostream>
#include <string>
#define N 50

using namespace std;

class ControleDeGastos
{
    public:
        ControleDeGastos();

        void SetDespesas(Despesa d, int pos);
        bool ExisteDespesaTipo(string c);
        double CalculaTotalDespesa();

    private:
        Despesa despesas[N];
};

#endif // CONTROLEDEGASTOS_H
