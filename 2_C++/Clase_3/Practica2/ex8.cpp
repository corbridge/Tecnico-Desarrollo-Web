/*
Realizar un arreglo unidimensional que imprima del 1 al 90 
*/

#include <iostream>
using namespace std;

int main()
{
    int arreglo[90];
    for(int i = 1; i<=90; i++)
    {
        arreglo[i] = i;
        cout<<"\nElemento["<<i<<"]: "<<arreglo[i];
    }
    return 0;
}