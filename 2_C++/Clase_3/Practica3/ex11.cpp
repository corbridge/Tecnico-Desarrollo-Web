/*
Realiza una matriz de 3X3 
*/

#include <iostream>
using namespace std;

int main()
{
    int matriz[11][11];
    for(int i = 1; i<=3; i++)
    {
        for(int j = 1; j<=3; j++)
        {
            cout<<"Elemento["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }
    for(int i = 1; i<=3; i++)
    {
        for(int j = 1; j<=3; j++)
        {
            freopen ("ex11.txt", "a" , stdout);
            cout<<matriz[i][j]<<" ";
            fclose (stdout);
        }
        cout<<"\n";
    }
    return 0;
}