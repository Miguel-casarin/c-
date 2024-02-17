#include <iostream>
#include <list>

using namespace std;
int main(){

    int tam =10;

    list<int> aulas;

    //iterator
    list<int>::iterator it;

    for(int i =0; i < tam; i++){
        aulas.push_front(i);
    }

    it = aulas.begin();

    //escolho a possição do interator 
    advance(it, 5);

    aulas.insert(it,0);

    cout << "tamanho da fila: " << aulas.size() << "\n\n"; 

    int tamanho_fila = aulas.size();
    for(int i =0; i < tamanho_fila; i++){
        cout << aulas.front() << endl;
        aulas.pop_front(); 
    }

    return 0; 
}