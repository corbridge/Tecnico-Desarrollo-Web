/*
Realiza una matriz de 15X15 
*/

#include <iostream>
using namespace std;

int main()
{
    int matriz[16][16];
    for(int i = 1; i<=15; i++)
    {
        for(int j = 1; j<=15; j++)
        {
            cout<<"Elemento["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }
    for(int i = 1; i<=15; i++)
    {
        for(int j = 1; j<=15; j++)
        {
            freopen ("ex10.txt", "a" , stdout);
            cout<<matriz[i][j]<<" ";
            fclose (stdout);
        }
        cout<<"\n";
    }
    return 0;
}