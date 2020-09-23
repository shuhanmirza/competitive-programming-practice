#include <stdio.h>

int main()
{
    int K,N,M,i,x,y;

    while(1)
    {
      scanf("%d",&K);

      if(K == 0) break;
      else
      {

            scanf("%d %d",&N,&M);

                for( i = 1; i <= K ;i++ )
                    {
                        scanf("%d %d",&x,&y);

                        if( x > N && y > M)
                            {
                                    printf("NE\n");
                            }
                                else if( x < N && y > M)
                                        {
                                            printf("NO\n");
                                            }
                                                    else if( x < N && y < M)
                                                            {
                                                                printf("SO\n");
                                                            }
                                                                else if( x > N && y < M)
                                                                    {
                                                                        printf("SE\n");
                                                                    }
                                                                                else
                                                                                {
                                                                                        printf("divisa\n");
                                                                                }
                    }

      }
    }

    return 0;
}
