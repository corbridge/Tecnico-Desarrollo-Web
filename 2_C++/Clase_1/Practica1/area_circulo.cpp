#include <iostream>
using namespace std;

int main()
{
    float radio;
    float pi = 3.1416;
    float area;

    cout<<"Digite radio del circulo: ";
    cin>>radio;

    area = (radio * radio) * pi;

    cout<<"El area del circulo es de: "<<area;
    return 0;
}