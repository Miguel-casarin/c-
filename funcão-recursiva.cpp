#include <iostream>

using namespace std;

void contador(int num, int cont=0);

int main(){
    return 0; 
    contador(20); 
}

void contador(int num, int cont){
    cout << cont << "\n";
    if(num > cont){
        contador(num, ++cont);
    }
}