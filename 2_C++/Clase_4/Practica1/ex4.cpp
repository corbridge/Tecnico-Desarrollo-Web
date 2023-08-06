/*
Realizar un ejercicio (TEMA LIBRE) aplicando archivos. 
*/

#include <iostream>
using namespace std;

int main()
{
    int arreglo[15];
    for(int i = 1; i<=15; i++)
    {
        arreglo[i] = i;
        freopen ("ex1.txt", "a" , stdout);
        cout<<"\nElemento["<<i<<"]: "<<arreglo[i];
        fclose (stdout);
    }
    return 0;
}