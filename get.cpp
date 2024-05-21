#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char nome[50];
    cout << ": ";
    gets(nome); // considera os espaços 
    cout << nome; 

    return 0; 
}