// o comando do while executa primeiro o bloco e depois testa a condição, diferente do while que apartir da condição executa a bloco 

#include <iostream>
using namespace std;

int main() {
    
    int cont = 20;
    
    do {
        cout << "fernandinho - " << cont << "\n";
        cont++;
    } while (cont < 20); 

    cout << "\n" << "acabou" << "\n"; 
    
    return 0;
}
