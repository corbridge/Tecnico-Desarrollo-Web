#include <iostream>
using namespace std;

int main()
{
    float base;
    float altura;
    float area;

    cout<<"Digite base del rectangulo: ";
    cin>>base;
    cout<<"Digite altura del rectangulo: ";
    cin>>altura;

    area = base * altura;

    cout<<"El area del rectangulo es de: "<<area;
    return 0;
}