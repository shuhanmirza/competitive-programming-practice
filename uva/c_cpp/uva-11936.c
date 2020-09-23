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
            printf("OK\n");
        }

                else
                {
                   printf("Wrong!!\n");
                }
    }
    return 0;
}

