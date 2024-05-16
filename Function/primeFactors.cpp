#include<iostream>
using namespace std;

bool isPrime(int n) 
{
    for(int i = 2 ; i < n ; i ++) 
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

void primeFactors(int n) 
{
    for(int i = 2; i <= n ; i ++)
    {
        if(isPrime(i))
        {
            int x = i ; // x = 2 
            while( n%x == 0 )
            {
                cout << i << " " ; 
                x = x*i ; 
            }
        }
    }
    return;
}

int main()
{
    int n = 232;
    primeFactors(n); 
    return 0;
}
