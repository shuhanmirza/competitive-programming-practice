#include <stdio.h>

int main()
{
    int N,K,X,i,sum,cas,T;
    //int marble[10005];
    /*
    for( i = 1 ; i <= 10000 ; i++)
    {
        marble[i] = i;
    }
    */
    scanf("%d",&T);

    for(cas = 1 ; cas <= T ; cas++)
    {
        scanf("%d %d %d",&N,&K,&X);

        sum = 0;

        for(i = 1 ; i <= N; i++)
        {
            if( (i < X)  || ( i > (X+K-1) ) ) sum+=i;
        }

        printf("Case %d: %d\n",cas,sum);
    }
    return 0;
}
