/*
Realiza una matriz de 9X9 
*/

#include <iostream>
using namespace std;

int main()
{
    int matriz[11][11];
    for(int i = 1; i<=9; i++)
    {
        for(int j = 1; j<=9; j++)
        {
            cout<<"Elemento["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }
    for(int i = 1; i<=9; i++)
    {
        for(int j = 1; j<=9; j++)
        {
            freopen ("ex17.txt", "a" , stdout);
            cout<<matriz[i][j]<<" ";
            fclose (stdout);
        }
        cout<<"\n";
    }
    return 0;
}