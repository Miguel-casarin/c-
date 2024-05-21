#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    char *nome;
    nome = (char *) malloc(sizeof(char)+1);

    cout << ": ";
    gets(nome); // considera os espaços 
    cout << nome; 

    return 0; 
}