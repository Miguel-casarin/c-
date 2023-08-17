#include <iostream>

using namespace std;

int main(){

    int n1 , n2 , resposta;

    char opc; 
    
    cout <<"digite o valor da nota 1:  ";
    cin >> n1; 

    cout <<"digite o valor da nota 2:  ";
    cin >> n2; 

    resposta = n1 += n2; 

    if ( resposta >= 60 ){

        cout << "possou ";

    }

    else{

        cout <<"deu ruim";

    }
    return 0; 
}