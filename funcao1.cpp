#include <iostream>

using namespace std;

// tenho que apresentar a função, seu tipo o o retorno

void soma(int n1, int n2);

int main(){

    int entrada1, entrada2; 

    cout << "entre com um valor: \n";
    cin >> entrada1;
    cout << "entre com um segundo valor: \n";
    cin >> entrada2;

    soma(entrada1, entrada2);

    return 0;
}


void soma(int n1, int n2){
    int resposta = n1 + n2;
    cout << resposta << "\n"; 
}