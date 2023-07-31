/*
Realizar un menu de 4 opciones (TEMA LIBRE) aplicando el tema de funciones y switch 
*/

#include <iostream>
using namespace std;

void zapatos();
void ropa();
void trajesBano();
void trajesVestir();

int main()
{
    int opcion, estado = 0;
    while(estado == 0)
    {        
        cout<<"\nBIENVENIDO!\n1) Ropa\n2) Zapatos\n3) Trajes de bano\n4) Trajes de vestir\n5) Salir\nElija una opcion: ";
        cin>>opcion;
        switch(opcion)
        {
            case 1:
                ropa();
                break;
            case 2:
                zapatos();
                break;
            case 3:
                trajesBano();
                break;
            case 4:
                trajesVestir();
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

void ropa()
{
    float costo = 499;
    float dinero_total;
    int cantidad_ropa;
    cout<<"\nElegiste ropa!\nLa ropa cuesta "<<costo<<"\nQue cantidad de ropa desea comprar?:";
    cin>>cantidad_ropa;
    dinero_total = cantidad_ropa * costo;
    cout<<"Debe de pagar: "<<dinero_total;
}
void zapatos()
{
    float costo = 1399;
    float dinero_total;
    int cantidad;
    cout<<"\nElegiste zapatos!\nLos zapatos cuestan "<<costo<<"\nQue cantidad de zapatos desea comprar?:";
    cin>>cantidad;
    dinero_total = cantidad * costo;
    cout<<"Debe de pagar: "<<dinero_total;
}
void trajesBano()
{
    float costo = 599;
    float dinero_total;
    int cantidad;
    cout<<"\nElegiste trajes de bano!\nEl traje de bano cuesta "<<costo<<"\nQue cantidad de trajes de bano desea comprar?:";
    cin>>cantidad;
    dinero_total = cantidad * costo;
    cout<<"Debe de pagar: "<<dinero_total;
}
void trajesVestir()
{
    float costo = 1999;
    float dinero_total;
    int cantidad;
    cout<<"\nElegiste trajes de vestir!\nLos trajes de vestir cuestan "<<costo<<"\nQue cantidad de trajes de vestir desea comprar?:";
    cin>>cantidad;
    dinero_total = cantidad * costo;
    cout<<"Debe de pagar: "<<dinero_total;
}