#include <stdio.h>

int main()
{
    int T,N,K,P,i,j,cas;

    scanf("%d", &T);

    for(cas = 1; cas <= T ; cas++)
    {
        scanf("%d %d %d",&N,&K,&P);

        i = 0;
        j = K;
        while( i < P)
        {
            if( j == N) j = 1;
            else j++;

            i++;
        }

        printf("Case %d: %d\n",cas,j);
    }
    return 0;
}
