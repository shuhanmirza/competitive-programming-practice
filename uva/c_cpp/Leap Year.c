#include <stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d",&a) == 1 )
    {
        b = 0;
        c = 0;

        if( ( a%4 == 0 && a%100 != 0) || a%400 == 0)
        {
            printf("This is leap year.\n");
            b = 1;
            c++;
        }

        if(a%15==0)
        {
            printf("This is huluculu festival year.\n");
            c++;
        }

        if(a%55==0 && b == 1)
        {
            printf("This is bulukulu festival year.\n");
        }

        if(c == 0)
        {
            printf("This is an ordinary year.\n");
        }

        printf("\n");
    }
    return 0;
}
