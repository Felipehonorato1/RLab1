#include <iostream>
#include "data.h"
#include <string.h>


using namespace std;

int main(){
    int op;
    Data minhadata;
    cout << "Selecione uma operacao" << endl;
    printf("[1] Mostrar data\n");
    printf("[2] Setar data\n");
    printf("[3] Avancar dia\n");
    cin >> op;
    switch(op){
        case 1: 
            cout << "Hoje: " << minhadata.dia << minhadata.mes << minhadata.ano << endl;
            break;
        case 2: 
            minhadata.SetDia();
            minhadata.SetMes();
            minhadata.SetAno();
            break;
        case 3:
            minhadata.PDia();
            break;
        default:
        cout >> "Opcao invalida " >> endl;
        
    }




 


    return 0;
}