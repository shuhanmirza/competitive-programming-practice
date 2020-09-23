#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

long long is_prime(long long n)
{
    long long i,b;

    if (n == 1) return 0;

     if(n==2)
     {
         return 1;
     }
    if(n%2==0)
    {
        return 0;
    }

          b=sqrt(n);

        for (i=3 ; i<=b; i=i+2)
        {
            if( n % i== 0 )
            {
                return 0;
            }
        }

            return 1;
}

int main()
{
    long long n,i,power,m;

    while(scanf("%lld",&n) == 1)
    {
        if(is_prime(n) == 0 )
        {
            cout << n <<" is not prime.\n";
        }

        else
        {
            i = n ;
            power = 1;

            while( i >= 1)
            {
                i /= 10;
                power *= 10;
            }

            power /= 10;

            m = 0;
            i = n;
            while( n >= 1)
            {
                m += power * (n % 10);

                n /= 10;
                power /= 10;
            }

            n = i;

            if( is_prime(m) == 1 && n != m) cout << n <<" is emirp.\n";
            else cout << n << " is prime.\n";
        }
    }

    return 0;
}
