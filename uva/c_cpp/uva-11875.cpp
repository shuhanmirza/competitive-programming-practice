#include <stdio.h>

int main()
{
    int i,T,cas,mid,n,player[20],j,swp;

    scanf("%d",&T);

    for( cas = 1 ; cas <= T ; cas++)
    {
        scanf("%d",&n);

        for(i = 0 ; i < n ; i++ )
        {
            scanf("%d",&player[i]);

            for( j = 0 ; j < i ; j++ )
                {
                    if( player [i] < player [j])
                    {
                        swp = player[i];
                        player[i] = player[j];
                        player[j] = swp;
                    }
                }
        }

        printf("Case %d: %d\n",cas,player[n/2]);
    }
            return 0 ;
}
