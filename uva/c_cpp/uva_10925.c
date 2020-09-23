#include <stdio.h>

int main()
{
    long long temp,cost,bill,N,F,i;

    bill = 1;
    while(scanf("%lld %lld",&N,&F) == 2)
    {
        if( N == 0 && F == 0) break;

        cost = 0;
        for( i = 0 ; i < N; i++ )
        {
            scanf("%lld",&temp);

            cost+=temp;
        }

        temp = cost / F;

        printf("Bill #%lld costs %lld: each friend should pay %lld\n",bill,cost,temp);
        bill ++;
    }
    return 0;
}
