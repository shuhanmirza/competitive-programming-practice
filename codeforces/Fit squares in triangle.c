#include <stdio.h>

int main()
{
    long long test,base,ans,i;

    scanf("%lld",&test);

    while(test--)
    {
        scanf("%lld",&base);

        i=(base/2)-1;

        ans=(i*(i+1))/2;

        printf("%lld\n",ans);
    }

    return 0;
}

