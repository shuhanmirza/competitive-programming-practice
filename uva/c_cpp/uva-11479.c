#include <stdio.h>

int main()
{
    int testcase,i;
    long long a,b,c;

    scanf("%d",&testcase);

    for(i = 1; i <= testcase ; i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);

        if( ( (a+b) > c ) && ( (b+c) > a) && ( (c+a) > b ) )
        {
            if( (a == b) && (b == c) )
            {
                printf("Case %d: Equilateral\n",i);
            }
                else if( (a == b) || (a == c) || (b==c)  )
                {
                    printf("Case %d: Isosceles\n",i);
                }

                    else
                    {
                        printf("Case %d: Scalene\n",i);
                    }
        }

                else
                {
                    printf("Case %d: Invalid\n",i);
                }
    }
    return 0;
}
