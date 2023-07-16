#include <iostream>
using namespace std;

int main()
{
    float base;
    float altura;
    float area;

    cout<<"Digite base del triangulo: ";
    cin>>base;
    cout<<"Digite altura del triangulo: ";
    cin>>altura;

    area = (base * altura)/2;

    cout<<"El area del triangulo es de: "<<area;
    return 0;
}