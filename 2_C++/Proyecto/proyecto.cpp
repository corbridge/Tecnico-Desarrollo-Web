/*
Sistema de cobro de supermercado
*/

#include <iostream>
using namespace std;

void visualizar(float);
float depositar();
float retirar();
float articulos(float);
void eleccion_articulo(string, float, float);

int main()
{
    int opcion, estado = 0;
    float credito = 0, deposito, retiro, nuevo_credito;
    string transaccion;

    while(estado == 0)
    {
        cout<<"\n***BIENVENIDO A NUESTRO SISTEMA***\n   1) Visualizar credito\n   2) Depositar\n   3) Retirar\n   4) Comprar articulos\n   5) Salir\n   Seleccione una opcion: ";
        cin>>opcion;

        switch(opcion)
        {
            case 1:
                visualizar(credito);
                break;
            case 2:
                transaccion = "Deposito";
                deposito = depositar();
                credito = credito + deposito;
                break;
            case 3:
                transaccion = "Retiro";
                retiro = retirar();
                credito = credito - retiro;
                break;
            case 4:
                nuevo_credito = articulos(credito);
                credito  = nuevo_credito;
                break;
            case 5:
                estado = 1;
                cout<<"\n***Gracias por usar nuestro sistema***";
                break;
        }
    }
        freopen ("recibo.txt", "w" , stdout);
        cout<<"Transaccion: "<<transaccion<<"\n  Cantidad: "<<credito<<"\n";
        fclose (stdout);
    return 0;
}

void visualizar(float credito)
{
    cout<<"\n   Su credito actual es de: "<<credito<<"\n";
}

float depositar()
{
    float deposito;
    cout<<"\n   Cuanto dinero desea depositar?: ";
    cin>>deposito;
    return deposito;
}

float retirar()
{
    float retiro;
    cout<<"\n   Cuanto dinero desea retirar?: ";
    cin>>retiro;
    return retiro;
}

float articulos(float credito)
{
    int opcion, estado = 0, kilos;
    float aguacate = 88, limon = 65, sandia = 15, platano = 13, compra;
    string articulo;

    while(estado == 0)
    {

        cout<<"\n****ARTICULOS DISPONIBLES****\n    1) Aguacate\n    2) Limon\n    3) Sandia\n    4) Platano\n    5) Salir\n    Seleccione una opcion: ";
        cin>>opcion;

        switch(opcion)
        {
            case 1:
                articulo = "aguacate";
                eleccion_articulo(articulo, aguacate, credito);
                break;
            case 2:
                articulo = "limon";
                eleccion_articulo(articulo, limon, credito);
                break;
            case 3:
                articulo = "sandia";
                eleccion_articulo(articulo, sandia, credito);
                break;
            case 4:
                articulo = "platano";
                eleccion_articulo(articulo, platano, credito);
                break;
            case 5:
                estado = 1;
                cout<<"\n***Gracias por comprar con nuestro sistema***";
                break;
        }
    }
    return credito;
}

void escribir_recibo(float dato, string transaccion)
{
    freopen ("recibo.txt", "w" , stdout);
        cout<<"Transaccion: "<<transaccion<<"\n  Cantidad: "<<dato<<"\n";
    fclose (stdout);
}

void eleccion_articulo(string articulo, float precio, float credito)
{
    int kilos;
    float compra;
    cout<<"\n   Usted ha elegido: "<<articulo<<"\n   Su costo por kilo es de: "<<precio<<"\n   Cuantos kilos desea comprar?: ";
    cin>>kilos;
    compra = kilos * precio;
    if(compra < credito)
    {
        credito = credito - compra;
        cout<<"\n   Su compra fue de: "<<compra;
    }else
    {
        cout<<"\n   Usted no cuenta con credito suficiente";
    }
}