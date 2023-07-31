/*
Realizar un menu de 4 opciones de funciones de una calculadora científica aplicando el tema de funciones y switch 
*/
#include <iostream>
#include <math.h>
using namespace std;

float cuadrado();
float cubico();
float exponente();
float raiz();

int main()
{
    int opcion;
    string figura;
    float resultado;

    cout<<"Ingrese la operacion\n1)raiz\n2)exponente\n3)cuadrado\n4)cubico\n";
    cout<<"Ingresa opcion: ";
    cin>>opcion;

    switch(opcion)
    {
        case 1: //raiz
            resultado = raiz();
            figura = "raiz";
            break;

        case 2: //exponente
            resultado = exponente();
            figura = "exponente";
            break;

        case 3: //cuadrado
            resultado = cuadrado();
            figura = "cuadrado";
            break;

        case 4: //cubico
            resultado = cubico();
            figura = "cubico";
            break;

        default:
        cout<<"Opcion no valida";
    }
    cout<<"La operacion "<<figura<<" es de "<<resultado;

    return 0;
}

float cubico()
{
    int n1;
    float resultado;
    cout<<"Digite primer numero: ";
    cin>>n1;
    resultado = n1 * n1 * n1;
    return resultado;
}

float cuadrado()
{
    int n1;
    float resultado;
    cout<<"Digite primer numero: ";
    cin>>n1;
    resultado = n1 * n1;
    return resultado;
}
float exponente()
{
    int n1, n2;
    float resultado, aux = 1;
    cout<<"Digite numero: ";
    cin>>n1;
    cout<<"Digite exponente: ";
    cin>>n2;
    for(int i = 1; i <= n2; i++)
    {
        resultado = aux * n2;
        aux = resultado;
    }
    return resultado;
}

float raiz()
{
    int n1, n2;
    float resultado;
    cout<<"Digite numero: ";
    cin>>n1;
    resultado = sqrt(n1);
    return resultado;
}
