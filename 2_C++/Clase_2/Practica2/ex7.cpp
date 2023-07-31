/*
Imprima la serie del 7 (incremento) 
*/
#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    while(i<=100)
    {
        if(i%7 == 0)
        {
            cout<<i<<"\n";
        }
        i++;
    }
    return 0;
}