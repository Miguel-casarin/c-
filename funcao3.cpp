// sobrecarga de funções, duas ou mais funçoes de mesmo nome 
// funciona mas os parametros devem ser distintos 

#include <iostream>
using namespace std;

void soma(int n1, int n2);
void soma();

int main(){

    soma(90, 10);
    soma();
    

    return 0;
}

 void soma(int n1, int n2){
    int resp;
    resp = n1 + n2;
    cout << "Soma de " << n1 << " com " << n2 << " = " << resp;

}
void soma(){
    int n1, n2, resp;
    n1 = 10;
    n2 = 20;
    resp = n1 + n2;
    cout << "Soma de " << n1 << " com " << n2 << " = " << resp;

}