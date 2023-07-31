/*
Imprima la serie del 3 (incremento) 
*/
#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    while(i<=100)
    {
        if(i%3 == 0)
        {
            cout<<i<<"\n";
        }
        i++;
    }
    return 0;
}