#include <iostream>
using namespace std;

struct carro{
    string nome;
    string cor;
    int pot;
    int velmax;
    int vel;

    void insere(string stnome, string stcor, int stpot, int stvelmax){

        nome = stnome;
        cor = stcor;
        pot = stpot;
        velmax = stvelmax;
        vel = 0; 
    }

    void mostra(){

    cout << "nome.............: " << nome << "\n";
    cout << "cor..............: " << cor << "\n";
    cout << "potencia.........: " << pot << "\n";
    cout << "velocidade atual.: "<< vel << "\n";
    cout << "velocidade maxima: " << velmax << "\n\n";

    }
    
    void muda_velocidade(int mv){

        vel = mv;
        if(vel > velmax){
            vel = velmax; 
        }
        if(vel < 0){
            vel =0; 
        }
    }
};

int main() {
    carro car1;
    carro car2;
    
    car1.insere("tornado", "vermelho", 450, 350);

    car1.muda_velocidade(150);
    car2.insere("fusca", "azul", 150, 80);
    
    car1.mostra();
    car2.mostra();

    return 0;
}
