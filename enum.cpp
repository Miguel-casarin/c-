// o enum e sequencial, eu posso usar qualquer tipo mas ele sempre vai ter um valor numerico, ex 0,1,2,3 como se fosse uma lista, mas eu posso assumir valores para os
// meus tipos e oq eu fiz aqui. 

#include <iostream>

using namespace std;

int main(){

    enum armas {fuzil=100, revolver=8, rifle=12, escopeta=6};
    armas armasel;
    armasel=rifle;

    cout << armasel; 

    return 0;
}