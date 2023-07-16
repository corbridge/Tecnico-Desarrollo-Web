/*
Se ingresa por teclado un número positivo de uno o dos 
dígitos (1..99) mostrar un mensaje indicando si el número 
tiene uno o dos dígitos. 
(Tener en cuenta que condición debe cumplirse para tener 
dos dígitos un número entero) 
*/

#include <iostream>
using namespace std;

int main()
{
    int numero;
    cout<<"Digite un numero: ";
    cin>>numero;

    if (numero >= 1  || numero < 99)
    {
        if (numero % 10 == 0)
        {
            cout<<"El numero tiene dos digitos";
        }
        else
        {
            cout<<"El numero tiene un digito";
        }
    }
    else
    {
    cout<<"Opcion no valida";
    }
    return 0;
}