/*
Realizar un arreglo unidimensional que imprima del 1 al 100 
*/

#include <iostream>
using namespace std;

int main()
{
    int arreglo[100];
    for(int i = 1; i<=100; i++)
    {
        arreglo[i] = i;
        cout<<"\nElemento["<<i<<"]: "<<arreglo[i];
    }
    return 0;
}