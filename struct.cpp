#include <iostream>
using namespace std;

struct cu_do_pietro {
    string nome;
    string cor;
    int pot;
    int velmax;
};

int main() {
    cu_do_pietro car1;
    car1.nome = "tornado";
    car1.cor = "vermelha";
    car1.pot = 30;
    car1.velmax = 100;

    cu_do_pietro car2;
    car2.nome = "bili"; 
    car2.cor = "azul";   
    car2.pot = 100;
    car2.velmax = 120;

    cout << "Carro 1:\n";
    cout << "nome.........: " << car1.nome << "\n";
    cout << "cor..........: " << car1.cor << "\n";
    cout << "potencia.....: " << car1.pot << "\n";
    cout << "velocidade...: " << car1.velmax << "\n";

    cout << endl;

    cout << "Carro 2:\n";
    cout << "nome.........: " << car2.nome << "\n";
    cout << "cor..........: " << car2.cor << "\n";
    cout << "potencia.....: " << car2.pot << "\n";
    cout << "velocidade...: " << car2.velmax << "\n";

    return 0;
}
