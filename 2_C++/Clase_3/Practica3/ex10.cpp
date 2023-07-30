/*
Realiza una matriz de 2X2 
*/

#include <iostream>
using namespace std;

int main()
{
    int matriz[11][11];
    for(int i = 1; i<=2; i++)
    {
        for(int j = 1; j<=2; j++)
        {
            cout<<"Elemento["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }
    for(int i = 1; i<=2; i++)
    {
        for(int j = 1; j<=2; j++)
        {
            freopen ("ex10.txt", "a" , stdout);
            cout<<matriz[i][j]<<" ";
            fclose (stdout);
        }
        cout<<"\n";
    }
    return 0;
}