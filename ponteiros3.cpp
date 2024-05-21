#include <iostream>
using namespace std;

void array(float *v)
{
    v[0]=0;
    v[1]=0;
    v[2]=0;
    v[3]=0;
    v[4]=0;
}

int main()
{
    float vector[5];

    // em vetores não precisa passar o endereço de memória 
    array(vector);

    for(int i=0; i < 5; i++)
    {
        cout << vector[i] << endl;
    }
    return 0;
}