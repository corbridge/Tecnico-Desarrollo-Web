/*
Imprima la serie del 5 (incremento) 
*/
#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 100; i++)
    {
        if(i%5 == 0)
        {
            cout<<i<<"\n";
        }
    }
    return 0;
}