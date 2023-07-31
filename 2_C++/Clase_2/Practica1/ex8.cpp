/*
Imprima la serie del 8 (incremento) 
*/
#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 100; i++)
    {
        if(i%8 == 0)
        {
            cout<<i<<"\n";
        }
    }
    return 0;
}