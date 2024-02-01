#include <iostream>

using namespace std;

// tenho que apresentar a função, seu tipo o o retorno
void texto();

int main(){

    for(int i =0; i < 10; i++){
        texto();
    }

    return 0;
}

// void não retorna nada
void texto(){
    cout << "\n top \n";
}

