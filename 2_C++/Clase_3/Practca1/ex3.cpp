/*
Realizar un menu de 4 opciones (TEMA LIBRE) aplicando el tema de funciones y switch 
*/

#include <iostream>
using namespace std;

void DELL();
void IBM();
void Apple();
void Hp();

int main()
{
    int opcion, estado = 0;
    while(estado == 0)
    {        
        cout<<"\nBIENVENIDO!\n1) IBM\n2) DELL\n3) Hp\n4) Apple\n5) Salir\nElija una opcion: ";
        cin>>opcion;
        switch(opcion)
        {
            case 1:
                IBM();
                break;
            case 2:
                DELL();
                break;
            case 3:
                Hp();
                break;
            case 4:
                Apple();
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

void IBM()
{
    float costo = 1299;
    float dinero_total;
    int cantidad;
    cout<<"\nElegiste IBM!\nLa IBM cuesta "<<costo<<"\nQue cantidad de IBM desea comprar?:";
    cin>>cantidad;
    dinero_total = cantidad * costo;
    cout<<"Debe de pagar: "<<dinero_total<<"\n";
}
void DELL()
{
    float costo = 1799;
    float dinero_total;
    int cantidad;
    cout<<"\nElegiste DELL!\nLos DELL cuestan "<<costo<<"\nQue cantidad de DELL desea comprar?:";
    cin>>cantidad;
    dinero_total = cantidad * costo;
    cout<<"Debe de pagar: "<<dinero_total<<"\n";
}
void Apple()
{
    float costo = 1399;
    float dinero_total;
    int cantidad;
    cout<<"\nElegiste Apple!\nApple cuesta "<<costo<<"\nQue cantidad de Apple desea comprar?:";
    cin>>cantidad;
    dinero_total = cantidad * costo;
    cout<<"Debe de pagar: "<<dinero_total<<"\n";
}
void Hp()
{
    float costo = 1999;
    float dinero_total;
    int cantidad;
    cout<<"\nElegiste Hp!\nLos Hp cuestan "<<costo<<"\nQue cantidad de Hp desea comprar?:";
    cin>>cantidad;
    dinero_total = cantidad * costo;
    cout<<"Debe de pagar: "<<dinero_total<<"\n";
}