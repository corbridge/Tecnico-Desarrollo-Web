/*
Realizar un arreglo unidimensional que imprima del 1 al 400 
*/

#include <iostream>
using namespace std;

int main()
{
    int arreglo[400];
    for(int i = 1; i<=400; i++)
    {
        arreglo[i] = i;
        cout<<"\nElemento["<<i<<"]: "<<arreglo[i];
    }
    return 0;
}