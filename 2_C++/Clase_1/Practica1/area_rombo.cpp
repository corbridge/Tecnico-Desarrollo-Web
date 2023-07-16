#include <iostream>
using namespace std;

int main()
{
    float diagMayor;
    float diagMenor;
    float area;

    cout<<"Digite diagonal mayor: ";
    cin>>diagMayor;
    cout<<"Digite diagonal menor: ";
    cin>>diagMenor;

    area = (diagMayor * diagMenor)/2;

    cout<<"El area del rombo es de: "<<area;
    return 0;
}