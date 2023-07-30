/*
Realiza una matriz de 6X6 
*/

#include <iostream>
using namespace std;

int main()
{
    int matriz[11][11];
    for(int i = 1; i<=6; i++)
    {
        for(int j = 1; j<=6; j++)
        {
            cout<<"Elemento["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }
    for(int i = 1; i<=6; i++)
    {
        for(int j = 1; j<=6; j++)
        {
            cout<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}