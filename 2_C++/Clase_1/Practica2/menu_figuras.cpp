#include <iostream>
using namespace std;

int main()
{
    int opcion;
    int base, altura, lado;
    float area, radio, pi=3.1416;
    string figura;

    cout<<"Ingrese la figura\n1)Circulo\n2)Rectangulo\n3)Cuadrado\n4)Triangulo\n";
    cout<<"Ingresa opcion: ";
    cin>>opcion;

    switch(opcion)
    {
        case 1: //Circulo
        figura = "circulo";
        cout<<"Digite radio del circulo: ";
        cin>>radio;
        area = pi * (radio * radio);
            break;

        case 2: //Rectangulo
        figura = "rectangulo";
        cout<<"Digite base del rectangulo: ";
        cin>>base;
        cout<<"Digite alturadel rectangulo: ";
        cin>>altura;
        area = base * altura;
            break;

        case 3: //Cuadrado
        figura == "circulo";
        cout<<"Digite lado del cuadrado: ";
        cin>>lado;
        area = lado * lado;
            break;

        case 4: //Triangulo
        figura = "triangulo";
        cout<<"Digite base del triangulo: ";
        cin>>base;
        cout<<"Digite alturadel triangulo: ";
        cin>>altura;
        area = (base * altura)/2;
            break;

        default:
        cout<<"Opcion no valida";
    }
    cout<<"El area del "<<figura<<" es de "<<area;

    return 0;
}