/*
Se ingresan tres notas de un alumno, si el promedio 
es mayor o igual a siete mostrar un mensaje "Promocionado". 
*/

#include <iostream>
using namespace std;

int main()
{
    float cal1, cal2, cal3, prom;
    cout<<"Digite calficacion 1: ";
    cin>>cal1;
    cout<<"Digite calficacion 2: ";
    cin>>cal2;
    cout<<"Digite calficacion 3: ";
    cin>>cal3;

    prom = (cal1 + cal2 + cal3)/3;

    if (prom >= 7)
    {
        cout<<"Promocionado";
    }
    else
    {
        cout<<"Reprobado";
    }
    return 0;
}