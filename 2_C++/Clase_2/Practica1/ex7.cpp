/*
Imprima la serie del 7 (incremento) 
*/
#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 100; i++)
    {
        if(i%7 == 0)
        {
            cout<<i<<"\n";
        }
    }
    return 0;
}