#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <iostream>

using namespace std;


class Pagamento
{
    public:
        Pagamento();

        void setValor(double v);
        void setNome(string c);

        string getNome();
        double getValor();

    private:
        double valorPagamento;
        string nomeDoFuncionario;
};

#endif // PAGAMENTO_H
