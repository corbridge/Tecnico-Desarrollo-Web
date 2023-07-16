/*
Realizar un programa que solicite la carga por teclado
de dos números, si el primero es mayor al segundo informar
su suma y diferencia, en caso contrario informar el producto
y la división del primero respecto al segundo. 
*/

#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    int suma, resta, mult;
    float div;

    cout<<"Digite un numero: ";
    cin>>num1;
    cout<<"Digite otro numero: ";
    cin>>num2;

    if(num1 > num2)
    {
        suma = num1 + num2;
        resta = num1 - num2;
        cout<<"\nLa suma de "<<num1<<" y "<<num2<<" es de "<<suma;
        cout<<"\nLa resta de "<<num1<<" y "<<num2<<" es de "<<resta;
    }
    else
    {
        mult = num1 * num2;
        div = num1 / num2;
        cout<<"\nLa multiplicacion de "<<num1<<" y "<<num2<<" es de "<<mult;
        cout<<"\nLa division de "<<num1<<" y "<<num2<<" es de "<<div;
    }
    return 0;
}