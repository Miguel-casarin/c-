#include <iostream>

using namespace std;

#define pi 3.14
// não colocar o 'cout' parar printrar uma string, fazer como abaixo
#define mensagem "ACHO QUE ESTOU GOSTANDO DE PROGRAMAR EM C++ \n"

int main(){

    int vidas=10, tiros=40, tamanho= 8; 

    cout << vidas <<"\n" << tiros <<"\n" << tamanho <<"\n"; 

    cout << "pi = "  << pi << "\n" << mensagem <<"\n";


    return 0; 
}