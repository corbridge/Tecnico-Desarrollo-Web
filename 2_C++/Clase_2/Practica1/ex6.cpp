/*
Imprima la serie del 6 (incremento) 
*/
#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 100; i++)
    {
        if(i%6 == 0)
        {
            cout<<i<<"\n";
        }
    }
    return 0;
}