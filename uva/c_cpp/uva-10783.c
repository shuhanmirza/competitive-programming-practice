#include <stdio.h>

int main()
{
    int a,b,testcase,i,sum,n;

    scanf("%d",&testcase);

        for(i=1 ; i <= testcase ; i++ )
        {
            scanf("%d %d",&a,&b);

            sum=0;

            if( a % 2 == 0) n = a+1;
                else n = a;

                while( n <= b )
                {
                    sum = sum + n;

                    n = n+2;
                }


                printf("Case %d: %d\n",i,sum);
        }

        return 0;

}

