#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

/*
   you should use n&1 == 0 instead of n % 2 == 0 ...... it saves time....

*/

int main()
{
    long long cas,T,N,i,j,k,flag,n,m;

    cin >> T;

    for(cas = 1; cas <= T ; cas ++)
    {
        cin >> N;



        if( (N & 1) == 0)
        {

         for(n = 2 ; n < N ; n += 2 )
            {
                 if( N % n == 0)
                 {
                     m = N/n;

                    if( m & 1 != 0 )
                    {

                        printf("Case %lld: %lld %lld\n",cas,m,n);
                        break;
                    }
                 }
            }
        }

            else printf("Case %lld: Impossible\n",cas);

    }

    return 0;
}
