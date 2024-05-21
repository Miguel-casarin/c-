#include <iostream>
#include <cstring>

using namespace std;

int main(){
    
    int tamanho =10;
    int erros = 0;
    int acertos = 0;

    char palavra[tamanho];
    cout << "digite uma palavra de ate 9 caracteres: ";
    cin >> palavra;
    
    for(int i =0; i < sizeof(palavra); i++){
        char letra;
        cout << "digite uma letra: " << "\n";
        cin >> letra;

        if(letra == palavra[i]){
            cout << "correto" << "\n";
            acertos++;
            if(acertos == strlen(palavra)){
                cout << "ganhou" << "\n";
                break; 
            }
        }else{
            cout << "incorreto" << "\n";
            erros++;
        }
    }

    cout << "a palavra e: " << palavra << "\n";
    cout << "acertos: "  << acertos << "\n" << "erros: ";
    //cout << sizeof(palavra);

    return 0;
}