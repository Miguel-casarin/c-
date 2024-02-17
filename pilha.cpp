#include <iostream>

// biblioteca para usar pilhas
#include <stack>

using namespace std;

int main(){

    stack <string> cartas;

    cartas.push("rei de copas");
    cartas.push("rei de espadas");
    cartas.push("rei de ouros");
    cartas.push("rei de paus");

    cout << "tamanho da pilha: " << cartas.size() << endl;
    cout << "carta do topo: " << cartas.top() << endl; 
    
    cartas.pop();

    cout << "tamanho da pilha apos retirar uma carta: " << cartas.size() << endl;
    cout << "carta do topo nova: " << cartas.top() << endl;


    return 0;
}