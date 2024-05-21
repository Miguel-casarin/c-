#include <iostream>
using namespace std;

int main(){

    string veiculo = "carro";

    //armazena o endereço de uma outra variavel, precisa ser do mesmo tipo da variavel
    string *ponteiro_veiculo;
    //ponteiro recebe o endereço da variavel veiculo
    ponteiro_veiculo=&veiculo;

    cout << ponteiro_veiculo << endl << *ponteiro_veiculo << endl;  

    //manipulando o valor da variavel veiculo atraves do ponteiro, foi adicinodo o valor moto no endereço
    *ponteiro_veiculo="moto";
    cout << ponteiro_veiculo << endl << *ponteiro_veiculo;

    return 0;
}