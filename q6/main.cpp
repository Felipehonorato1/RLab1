#include <iostream>
#include <string>
#include "Pagamento.h"
#include "ControleDePagamentos.h"


using namespace std;

void ExibeMenu(){
cout << "_______________________________________________" << endl;
cout << "[1] Cadastrar novo funcionario" << endl;
cout << "[2] Exibir folha de pagamento" << endl;
cout << "[3] Pesquisar funcionario" << endl;
cout << "[4] Calcular total" << endl;
cout << "[5] Sair " << endl;
cout << "_______________________________________________" << endl;
}

int main()
{
    Pagamento emp;
    ControleDePagamentos cd;
    int op,iter =0;
    string save;
    double value;

    while(1){
        ExibeMenu();
        cout << "Selecione uma opcao: ";
        cin >> op;

        switch(op){
    case 1:
        cout << "Nome do funcionario: ";
        cin >> save;
        cout << "Salario: ";
        cin >> value;
        emp.setNome(save);
        emp.setValor(value);
        cd.SetPagamento(emp,iter);
        iter++;
        break;
    case 2:
        cd.ExibeFolha();
        break;

    case 3:
        cout << "Nome do funcionario: ";
        cin >> save;
        cout<< cd.ExisteFuncionario(save) << endl;
        break;

    case 4:
        value = cd.CalculaTotalPagamentos();
        cout << "Valor total: "<< value << endl;
        break;

    case 5:
        cout << "Saindo..." << endl;
        return 1;
        break;
    default: cout << "Opcao invalida" << endl;
    }

}

    return 0;
}
