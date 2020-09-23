#include <stdio.h>

int main()
{
    long long input,ans;

    while(scanf("%lld",&input) == 1)
    {
        if(input == 0) break;

         ans = input % 9;

         if(ans == 0) ans = 9;

         printf("%lld\n",ans);
    }
    return 0;
}
