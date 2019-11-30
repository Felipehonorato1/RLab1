#include "data.h"
#include <iostream>
#include <string>


    Data();

    using namespace std;
    dia = mes = ano = 1;

    void Data::SetDia(){
        cin >> dia;
        if(dia > 31 || dia < 1){
            cout << "Numero invalido" << endl;
            dia = 1;
        }
    }
        void Data::SetMes(){
        cin >> mes;
        if(mes > 12|| mes < 1){
            cout << "Numero invalido" << endl;
            mes = 1;
        }
    }

         void Data::SetAno(){
        cin >> ano;
        if(ano < 0){
            cout << "Numero invalido" << endl;
            ano = 1;
        }
    }

    void Data::PDia(){
        dia++;
    }


