// ponteiros e funções 

#include <iostream>
using namespace std;

void soma(float *var, float valor)
{
    *var += valor;
}

int main()
{

    float num = 0;

    // passei o endereço de num para o ponteiro da função
    soma(&num,15);
    cout << num << endl;

    return 0;
}