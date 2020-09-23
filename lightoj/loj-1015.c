#include <stdio.h>

int main()
{
    long long dust,sum,N,T,cas,i;

    scanf("%lld",&T);

    for(cas = 1 ;cas <= T ; cas++)
    {
       scanf("%lld",&N);

       sum = 0;
       for( i = 0 ; i < N ; i++)
       {
           scanf("%lld",&dust);

           if( dust >= 0 ) sum += dust;
       }

       printf("Case %lld: %lld\n",cas,sum);
    }
    return 0;
}
