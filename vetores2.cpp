#include <iostream>

using namespace std;

int main(){

    int vetor[5];
    vetor[0]=10;
    vetor[1]=20;
    vetor[2]=30;
    vetor[3]=40;
    vetor[4]=50;

// meu indice X da a posição do vetor 
    for (int x=0; x < sizeof(vetor)/4; x++ ){
        cout << vetor[x] << "\n"; 
    }
    return 0; 
}