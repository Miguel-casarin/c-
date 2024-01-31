#include <iostream>

using namespace std;

int main(){
    
    int n1, n2, note;
    string resp; 

    cout << "write the first number:";
    cin >> n1;
    cout << "write the second number: ";
    cin >> n2;

    note = (n1 + n2)/2;
    // se verdadeiro a primeira opção sera printada, se falso sera a segunda 
    resp=(note >= 60) ? "aprovado" :"reprovado";
    cout << resp;

    return 0; 
}