#include <iostream>

using namespace std;

int main(){

    float tamanho;
    cout << "calculo tamanho de rola\nFAVOR UTILIZAR PONTO NO LUGAR DA VIRGULA\n";
    cout << "quantos cm: ";
    cin >> tamanho;


    if(tamanho > 4 && tamanho <= 5){
        cout << "rolinha\n";
    }

    if(tamanho < 4){
        cout << "micro-penis";
    }

    if(tamanho > 5 && tamanho < 7){
        cout << "rolinha plus\n";
    }

    if(tamanho >=12  && tamanho <= 13){
        cout << "media nacional\n";
    }

    else if(tamanho > 13 && tamanho <= 18){
            cout << "acima da media\n";
        }

    else if(tamanho >= 18 && tamanho < 25){
        cout << "roludo\n";
    }

    else if(tamanho >= 27 && tamanho <=33){
        cout <<"KID BENGALA\n";
    }
    
    else if(tamanho > 33){
        cout <<"incalculavel(devorador de cu)\n";
    }

    cout << "Pressione Enter para sair...";
    cin.get();


    return 0;
}