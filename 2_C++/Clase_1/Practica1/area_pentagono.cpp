#include <iostream>
using namespace std;

int main()
{
    float lado;
    float apotema;
    float area;

    cout<<"Digite lado del pentagono: ";
    cin>>lado;
    cout<<"Digite apotema del pentagono: ";
    cin>>apotema;

    area = ((lado * 5)*apotema)/2;

    cout<<"El area del pentagono es de: "<<area;
    return 0;
}