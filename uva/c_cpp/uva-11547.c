#include <stdio.h>

int main()
{
    int testcase,i;
    long long n;

    scanf("%d",&testcase);

        for(i=1 ; i <= testcase ; i++ )
        {
            scanf("%lld",&n);

             n = n * 567;
             n = n / 9;
             n = n + 7492;
             n = n * 235;
             n = n / 47;
             n = n - 498;

             n = n % 100;
             n = n / 10;

             if( n < 0) n = n * (-1) ;

            printf("%lld\n",n);



        }

        return 0;

}


