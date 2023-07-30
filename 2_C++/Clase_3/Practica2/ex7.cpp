/*
Realizar un arreglo unidimensional que imprima del 1 al 80 
*/

#include <iostream>
using namespace std;

int main()
{
    int arreglo[80];
    for(int i = 1; i<=80; i++)
    {
        arreglo[i] = i;
        cout<<"\nElemento["<<i<<"]: "<<arreglo[i];
    }
    return 0;
}