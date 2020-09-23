#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;


int main()
{
    long long cas,T,n,i,power,m;

    cin >> T;

    for(cas = 1 ; cas <= T ; cas++)
    {
        scanf("%lld",&n);

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

           if( n != m) printf("Case %lld: No\n",cas);

           else printf("Case %lld: Yes\n",cas);
        }


    return 0;
}

