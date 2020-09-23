#include <stdio.h>

int main()
{
    int C,N,grade[1005],i,j,avobe_average;
    double average,ans;

    scanf("%d",&C);

    for( i = 1 ; i <= C ; i++ )
    {
        scanf("%d",&N);

        average = 0.0 ;
        avobe_average = 0;

        for( j = 0 ; j < N ;j++)
        {
            scanf("%d", &grade[j]);
            average += (double)grade[j] ;
        }

            average = average / N;

            for( j = 0 ; j < N ; j++)
            {
                if( (double)grade[j] > average )
                {
                    avobe_average++;
                }
            }

                    ans = ( (double)avobe_average / N ) * 100.0;

                    printf("%0.3lf%%\n",ans);

    }
}
