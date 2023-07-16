/*
Se ingresa una opcion haciendo referencia al dia de la 
semana, según el día seleccionado  se imprime un mensaje 
de texto de como se encuentra el clima de ese día. 
*/

#include <iostream>
using namespace std;

int main()
{
    int dia;
    cout<<"Ingrese dia de la semana:\n1)Lunes\n2)Martes\n3)Miercoles\n4)Jueves\n5)Viernes\n6)Sabado\n7)Domingo";
    cout<<"\nIngresa opcion:";
    cin>>dia;
    string dias[7] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
    string clima[7] = {"soleado", "frio", "lluvioso", "ventoso", "caluroso", "con granizo", "bajo cero"};

    for(int i = 1; i <= 7; i++)
    {
        if(dia == i)
        {
            cout<<"\nEl dia "<<dias[i - 1]<<" esta "<<clima[i - 1];
        }
    }
    return 0;
}