#include <iostream>

using namespace std;

int main(){

    int valor;
    cout << "escolha uma cor\n";
    cout << "[1]=verde, [2]=azul, [3]=rosa\n";
    cin >> valor;

    switch (valor){
    case 1 :
        cout << "cor selecionada: verde\n";
        break;
    

    case 2:
        cout << "cor selecionada: azul\n\n";
        break;
    

    case 3:
        cout << "cor selecionada: rosa\n\n";
        break;
    
    default:
        cout << "cor invalida\n\n";
        break;
    }


    cout << "fim\n\n";
    return 0;
}