#include <iostream>

using namespace std;

// tenho que apresentar a função, seu tipo o o retorno
float soma(float n1, float n2);

int main(){
    
    float resp;
    float entrada1, entrada2;

    cout << "entre com um valor: \n";
    cin >> entrada1;
    cout << "entre com um segundo valor: \n";
    cin >> entrada2;

    resp = soma(entrada1, entrada2); 
    cout << "sua resposta: " << resp << "\n"; 

    return 0;
}

float soma(float n1, float n2){
    return n1 + n2;
}

