#include <cstdio>
#include <cmath>
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

int is_prime(long long n)
{
    long long i,b;

    if (n == 1) return 1;

     if(n==2)
     {
         return 1;
     }
    if( n % 2 == 0 )
    {
        return 0;
    }

          b=sqrt(n);

        for (i=3 ; i<=b; i=i+2)
        {
            if( n % i == 0 )
            {
                return 0;
            }
        }

            return 1;
}

int main()
{
    string input;
    long long i,siz,value;

    while( cin >> input )
    {
        value = 0;

        siz = input.size();

        for( i = 0 ; i < siz ; i++)
        {
            if( input [i] >= 'a' && input [i] <= 'z' )
            {
                value = 1 + value + (input[i] - 'a');
            }

            else
            {
                value = 1 + value + (input[i] - 'A') + 26;
            }
        }

         if( is_prime(value) == 1)
         {
             cout << "It is a prime word.\n" ;
         }
          else
          {
              cout << "It is not a prime word.\n";
          }

    }
    return 0;
}
