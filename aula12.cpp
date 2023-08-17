#include <iostream>

using namespace std;

int main(){

    int n1, n2, nota;
    string resposta; 

    cout << "digita a primeira nota: ";
    cin >> n1;
    cout << "digita a segunda nota: ";
    cin >> n2;

    nota = (n1 += n2) /2; 
    resposta=(nota >= 60) ? "aprovado" :"reprovado";
    cout << resposta;

    return 0;
}