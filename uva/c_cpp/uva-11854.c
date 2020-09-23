#include <stdio.h>

int main()
{
    long long a,b,c;

    while( scanf("%lld %lld %lld",&a,&b,&c) == 3)
    {

        if( (a + b + c) == 0) break;

        if( a > b && a > c )
        {
            if( (a*a) == ( (b*b) + (c*c)))
            {
                printf("right\n");
            }

            else printf("wrong\n");
        }

                else if( b > a && b > c )
                    {
                        if( (b*b) == ( (a*a) + (c*c)))
                        {
                            printf("right\n");
                        }

                        else printf("wrong\n");
                    }

            else
            {
                if( (c*c) == ( (b*b) + (a*a)))
                {
                    printf("right\n");
                }

                else printf("wrong\n");
            }
    }

    return 0;
}
