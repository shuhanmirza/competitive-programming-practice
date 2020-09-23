#include <stdio.h>

int main()
{
    int i,j,number[1005],N,ans,swap;

    while(scanf("%d",&N) == 1)
    {
        ans = 0;

        for( i = 0 ; i < N ; i++)
        {
            scanf("%d",&number[i]);
        }

              for(i = 0 ; i < ( N - 1 ); i++)
                  {
                    for(j = 0 ; j < N - i - 1; j++)
                        {
                            if (number[j] > number[j+1]) /* For decreasing order use < */
                            {
                                swap       = number[j];
                                number[j]   = number[j+1];
                                number[j+1] = swap;
                                ans ++;
                            }
                        }
                    }

                    printf("Minimum exchange operations : %d\n",ans);
    }

    return 0;
}
