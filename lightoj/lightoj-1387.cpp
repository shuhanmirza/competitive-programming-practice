#include<stdio.h>
int main()
{
    int i,T,cas,N,d,sum;
    char h[25];

    scanf("%d",&T);

    for( cas = 1 ;cas <= T ; cas++)
    {
            scanf("%d",&N);
            printf("Case %d:\n",cas);
            sum = 0;
        for(i=1 ; i<=N ; i++)
        {
            scanf("%s",&h);
            if(h[0] == 'd')
            {
                scanf("%d",&d);
                sum += d;
            }
            else
                {
                    printf("%d\n",sum);
                }
        }
    }
    return 0;

}
