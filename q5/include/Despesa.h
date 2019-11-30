#ifndef DESPESA_H
#define DESPESA_H
#include <iostream>
#include <string>

using namespace std;

class Despesa
{
    public:
        Despesa();
        Despesa(double a,string c);

        void setCaracteristicas(double a,string c);

        double getValor();
        string getTipo();
    private:

        double valor;
        string tGasto;
};

#endif // DESPESA_H
