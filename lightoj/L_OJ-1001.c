#include<stdio.h>

int main()
{
    int t,i,n,a,b,j,flag,c;

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        b=n;
        if (n>10) b=n-10;

        a=n-b;

        printf("%d %d\n",a,b);
    }

    return 0;
}
