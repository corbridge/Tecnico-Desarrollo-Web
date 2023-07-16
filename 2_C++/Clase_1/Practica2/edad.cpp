#include <iostream>
using namespace std;

int main()
{
    int edad;
    cout<<"Digita tu edad: ";
    cin>>edad;

    if (edad >= 18)
    {
        cout<<"\nEres mayor de edad";
    }
    else
    {
        cout<<"\nEres menor de edad";
    }

    return 0;
}