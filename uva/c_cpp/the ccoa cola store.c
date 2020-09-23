#include<stdio.h>

int main()
{
    int n,ans;

    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        ans=0;
    while(n>1)
    {
        if(n==2)
        {
            ans=ans+1;
            break;
        }
        ans=ans+(n/3);
        n=(n/3)+(n%3);

    }

        printf("%d\n",ans);

    }
    return 0;
}
