/*
Realizar un arreglo unidimensional que imprima del 1 al 70 
*/

#include <iostream>
using namespace std;

int main()
{
    int arreglo[70];
    for(int i = 1; i<=70; i++)
    {
        arreglo[i] = i;
        freopen ("ex6.txt", "a" , stdout);
        cout<<"\nElemento["<<i<<"]: "<<arreglo[i];
        fclose (stdout);
    }
    return 0;
}