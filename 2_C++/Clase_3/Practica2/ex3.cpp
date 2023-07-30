/*
Realizar un arreglo unidimensional que imprima del 1 al 40 
*/

#include <iostream>
using namespace std;

int main()
{
    int arreglo[40];
    for(int i = 1; i<=40; i++)
    {
        arreglo[i] = i;
        cout<<"\nElemento["<<i<<"]: "<<arreglo[i];
    }
    return 0;
}