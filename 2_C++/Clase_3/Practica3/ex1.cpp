/*
Realizar un arreglo unidimensional que imprima del 1 al 20 
*/

#include <iostream>
using namespace std;

int main()
{
    int arreglo[20];
    for(int i = 1; i<=20; i++)
    {
        arreglo[i] = i;
        freopen ("ex1.txt", "a" , stdout);
        cout<<"\nElemento["<<i<<"]: "<<arreglo[i];
        fclose (stdout);
    }
    return 0;
}