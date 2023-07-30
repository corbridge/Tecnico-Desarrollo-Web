/*
Realiza una matriz de 5X5 
*/

#include <iostream>
using namespace std;

int main()
{
    int matriz[11][11];
    for(int i = 1; i<=5; i++)
    {
        for(int j = 1; j<=5; j++)
        {
            cout<<"Elemento["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }
    for(int i = 1; i<=5; i++)
    {
        for(int j = 1; j<=5; j++)
        {
            freopen ("ex13.txt", "a" , stdout);
            cout<<matriz[i][j]<<" ";
            fclose (stdout);
        }
        cout<<"\n";
    }
    return 0;
}