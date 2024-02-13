#include <iostream>

using namespace std;

int fatorial(int num) {
    if (num > 1) {
        return num * fatorial(num - 1);
    } else {
        return 1;
    }
}  

int main(){
    
    int numero, result;
    cout << "entre com um valor";
    cin >> numero;
    result = fatorial(numero); 
    cout << result; 

    return 0;
}