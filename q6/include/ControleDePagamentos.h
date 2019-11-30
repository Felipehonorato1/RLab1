#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"
#define N 50

class ControleDePagamentos
{
    public:
        ControleDePagamentos();
        Pagamento pagamentos[N];

        void SetPagamento(Pagamento d,int i);

        double CalculaTotalPagamentos();

        void ExibeFolha();

        bool ExisteFuncionario(string c);

    private:
};

#endif // CONTROLEDEPAGAMENTOS_H
