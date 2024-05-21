//usando arrays e ponteiros, foda 
#include <iostream>
using namespace std;

int main(){
    
    int *p;
    int vetor[10];
    p=vetor;

    for(int i =0; i < 10; i++)
    {
        p=&vetor[i];
        cout << p << "\n"; 
    }

    return 0;
}