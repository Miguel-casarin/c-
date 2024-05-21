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
    carro *carros=new carro[5];
    carro car1,car2,car3,car4,car5;

    carros[0]=car1;
    carros[1]=car2;
    carros[2]=car3;
    carros[3]=car4;
    carros[4]=car5;

    carros[0].insere("tornado","vermelho",450,50);
    carros[1].insere("tornado","vermelho",450,50);
    carros[2].insere("tornado","vermelho",450,50);
    carros[3].insere("tornado","vermelho",450,50);
    carros[4].insere("tornado","vermelho",450,50);

    for(int i=0; i<5; i++){
        carros[i].mostra();
    }

    return 0;
}
