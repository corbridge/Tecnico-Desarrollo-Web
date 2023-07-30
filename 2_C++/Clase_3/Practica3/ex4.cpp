/*
Realizar un arreglo unidimensional que imprima del 1 al 50 
*/

#include <iostream>
using namespace std;

int main()
{
    int arreglo[50];
    for(int i = 1; i<=50; i++)
    {
        arreglo[i] = i;
        freopen ("ex4.txt", "a" , stdout);
        cout<<"\nElemento["<<i<<"]: "<<arreglo[i];
        fclose (stdout);
    }
    return 0;
}