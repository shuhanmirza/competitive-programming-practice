#include <bits/stdc++.h>

using namespace std;

#define LL long long

/// not complete

LL gcd(LL a , LL b)
{
    if(b == 0) return a;

    return gcd(b,a%b);
}

int main()
{
    LL i,j,N,G;

    while(scanf("%lld",&N)==1)
    {
        if(N == 0) break;

        memset(DP,-1,sizeof DP);
        G = 0;

        for(i = 1 ; i <= N ; i++)
        {
            for(j = 1 ; j <= N ; j++)
            {
                if(DP[i][j] > -1)
                {
                    G += DP[i][j];
                }

                else if(DP[j][i] > -1)
                {
                    G += DP[i][j];
                }

                else
                {
                    DP[i][j] = gcd(i,j);
                    DP[j][i] = DP[i][j];
                    G += DP[i][j] ;
                }
            }
        }

        printf("lld\n",G);
    }
   return 0;
}
