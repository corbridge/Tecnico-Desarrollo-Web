#include<iostream>
using namespace std;

int main()
{
    int op,s,r,n1,n2;
    cout <<"Ingrese una opcion del menu de operaciones aritmeticas:\n1. Suma \n2. Resta \n3. Multiplicacion \n4. Division";
    cout <<"\nElija opcion: ";
    cin >>op;
    if (op == 1)//Estructura selectiva anidada
    {
        cout <<" Ingrese un entrada: ";
        cin >>n1;
        cout <<" Ingrese otra entrada: ";
        cin >>n2;
        s = n1+n2;
        cout <<" la suma es ";
        cout <<s;
    }
    else if (op == 2)
    {
        cout <<" Ingrese un entrada: ";
        cin >>n1;
        cout <<" Ingrese otra entrada: ";
        cin >>n2;
        r = n1-n2;
        cout <<" la resta es ";
        cout <<r;    
    }
    else if (op == 3)
    {
        cout <<" Ingrese un entrada: ";
        cin >>n1;
        cout <<" Ingrese otra entrada: ";
        cin >>n2;
        r = n1*n2;
        cout <<" la multiplicacion es ";
        cout <<r;  
    }
    else if (op == 4)
    {
        cout <<" Ingrese un entrada: ";
        cin >>n1;
        cout <<" Ingrese otra entrada: ";
        cin >>n2;
        r = n1/n2;
        cout <<" la division es ";
        cout <<r;  
    }
    else
    {
        cout <<" Elija la opcion correcta";
    }
    return 0;
}