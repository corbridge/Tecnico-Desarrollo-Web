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
        if(i % 2 == 0)
        {
            arreglo[i] = i;
            freopen ("ex19.txt", "a" , stdout);
            cout<<"\nElemento["<<i<<"]: "<<arreglo[i];
            fclose (stdout);
        }
    }
    return 0;
}