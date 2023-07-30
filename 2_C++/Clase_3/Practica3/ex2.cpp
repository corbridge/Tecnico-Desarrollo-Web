/*
Realizar un arreglo unidimensional que imprima del 1 al 30 
*/

#include <iostream>
using namespace std;

int main()
{
    int arreglo[30];
    for(int i = 1; i<=30; i++)
    {
        arreglo[i] = i;
        freopen ("ex2.txt", "a" , stdout);
        cout<<"\nElemento["<<i<<"]: "<<arreglo[i];
        fclose (stdout);
    }
    return 0;
}