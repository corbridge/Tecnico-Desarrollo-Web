/*
Realizar un menu de 4 opciones de figuras geométricas aplicando el tema de funciones y switch. 
*/
#include <iostream>
using namespace std;

float cuadrado();
float triangulo();
float rectangulo();
float circulo();

int main()
{
    int opcion;
    string figura;
    float area;

    cout<<"Ingrese la figura\n1)Circulo\n2)Rectangulo\n3)Cuadrado\n4)Triangulo\n";
    cout<<"Ingresa opcion: ";
    cin>>opcion;

    switch(opcion)
    {
        case 1: //Circulo
            area = circulo();
            figura = "circulo";
            break;

        case 2: //Rectangulo
            area = rectangulo();
            figura = "rectangulo";
            break;

        case 3: //Cuadrado
            area = cuadrado();
            figura = "cuadrado";
            break;

        case 4: //Triangulo
            area = triangulo();
            figura = "triangulo";
            break;

        default:
        cout<<"Opcion no valida";
    }
    cout<<"El area del "<<figura<<" es de "<<area;

    return 0;
}

float triangulo()
{
    int base,altura;
    float area;
    cout<<"Digite base del triangulo: ";
    cin>>base;
    cout<<"Digite alturadel triangulo: ";
    cin>>altura;
    area = (base * altura)/2;
    return area;
}

float cuadrado()
{
    int lado;
    float area;
    cout<<"Digite lado del cuadrado: ";
    cin>>lado;
    area = lado * lado;
    return area;
}
float rectangulo()
{
    int base, altura;
    float area;
    cout<<"Digite base del rectangulo: ";
    cin>>base;
    cout<<"Digite alturadel rectangulo: ";
    cin>>altura;
    area = base * altura;
    return area;
}

float circulo()
{
    int radio;
    float area, pi=3.1416;
    cout<<"Digite radio del circulo: ";
    cin>>radio;
    area = pi * (radio * radio);
    return area;
}
