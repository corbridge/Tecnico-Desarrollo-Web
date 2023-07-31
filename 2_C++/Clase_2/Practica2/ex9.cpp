/*
Imprima la serie del 9 (incremento) 
*/
#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    while(i<=100)
    {
        if(i%9 == 0)
        {
            cout<<i<<"\n";
        }
        i++;
    }
    return 0;
}