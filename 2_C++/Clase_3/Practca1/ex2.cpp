/*
Realizar un menu de 4 opciones (TEMA LIBRE) aplicando el tema de funciones y switch 
*/

#include <iostream>
using namespace std;

void Jordan();
void Nike();
void Puma();
void Adidas();

int main()
{
    int opcion, estado = 0;
    while(estado == 0)
    {        
        cout<<"\nBIENVENIDO!\n1) Nike\n2) Jordan\n3) Adidas\n4) Puma\n5) Salir\nElija una opcion: ";
        cin>>opcion;
        switch(opcion)
        {
            case 1:
                Nike();
                break;
            case 2:
                Jordan();
                break;
            case 3:
                Adidas();
                break;
            case 4:
                Puma();
                break;
            case 5:
                estado = 1;
                cout<<"Gracias por usar nuestro sistema";
                break;
            default:
                cout<<"Opcion no valida";
                break;
        }
    }

    return 0;
}

void Nike()
{
    float costo = 1299;
    float dinero_total;
    int cantidad;
    cout<<"\nElegiste Nike!\nLa Nike cuesta "<<costo<<"\nQue cantidad de Nike desea comprar?:";
    cin>>cantidad;
    dinero_total = cantidad * costo;
    cout<<"Debe de pagar: "<<dinero_total<<"\n";
}
void Jordan()
{
    float costo = 1799;
    float dinero_total;
    int cantidad;
    cout<<"\nElegiste Jordan!\nLos Jordan cuestan "<<costo<<"\nQue cantidad de Jordan desea comprar?:";
    cin>>cantidad;
    dinero_total = cantidad * costo;
    cout<<"Debe de pagar: "<<dinero_total<<"\n";
}
void Puma()
{
    float costo = 1399;
    float dinero_total;
    int cantidad;
    cout<<"\nElegiste Puma!\nPuma cuesta "<<costo<<"\nQue cantidad de Puma desea comprar?:";
    cin>>cantidad;
    dinero_total = cantidad * costo;
    cout<<"Debe de pagar: "<<dinero_total<<"\n";
}
void Adidas()
{
    float costo = 1999;
    float dinero_total;
    int cantidad;
    cout<<"\nElegiste Adidas!\nLos Adidas cuestan "<<costo<<"\nQue cantidad de Adidas desea comprar?:";
    cin>>cantidad;
    dinero_total = cantidad * costo;
    cout<<"Debe de pagar: "<<dinero_total<<"\n";
}