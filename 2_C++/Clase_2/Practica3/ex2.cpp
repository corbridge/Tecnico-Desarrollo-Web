/*
Realizar un menu de 4 opciones de funciones aritmeticas aplicando el tema de funciones y switch. 
*/
#include <iostream>
using namespace std;

float suma();
float resta();
float multiplicacion();
float division();

int main()
{
    int opcion;
    string figura;
    float resultado;

    cout<<"Ingrese la figura\n1)division\n2)multiplicacion\n3)suma\n4)resta\n";
    cout<<"Ingresa opcion: ";
    cin>>opcion;

    switch(opcion)
    {
        case 1: //division
            resultado = division();
            figura = "division";
            break;

        case 2: //multiplicacion
            resultado = multiplicacion();
            figura = "multiplicacion";
            break;

        case 3: //suma
            resultado = suma();
            figura = "suma";
            break;

        case 4: //resta
            resultado = resta();
            figura = "resta";
            break;

        default:
        cout<<"Opcion no valida";
    }
    cout<<"La "<<figura<<" es de "<<resultado;

    return 0;
}

float resta()
{
    int n1, n2;
    float resultado;
    cout<<"Digite primer numero: ";
    cin>>n1;
    cout<<"Digite segundo numero: ";
    cin>>n2;
    resultado = n1 - n2;
    return resultado;
}

float suma()
{
    int n1, n2;
    float resultado;
    cout<<"Digite primer numero: ";
    cin>>n1;
    cout<<"Digite segundo numero: ";
    cin>>n2;
    resultado = n1 + n2;
    return resultado;
}
float multiplicacion()
{
    int n1, n2;
    float resultado;
    cout<<"Digite primer numero: ";
    cin>>n1;
    cout<<"Digite segundo numero: ";
    cin>>n2;
    resultado = n1 * n2;
    return resultado;
}

float division()
{
    int n1, n2;
    float resultado;
    cout<<"Digite primer numero: ";
    cin>>n1;
    cout<<"Digite segundo numero: ";
    cin>>n2;
    resultado = n1 / n2;
    return resultado;
}
