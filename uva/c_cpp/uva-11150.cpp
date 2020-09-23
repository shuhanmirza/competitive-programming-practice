#include <stdio.h>

int main()
{
    int cola,ans,flag, borrow;

    while(scanf("%d",&cola) == 1)
    {
        if( cola%2 == 0 )
        {
            borrow = 2;
        }
        else
        {
            borrow = 1;
        }

        ans = cola;
        cola += borrow;

        while( cola > 2 )
        {
            ans += ( cola/3 );
            cola = ( cola/3) + ( cola%3 );
        }
        printf("%d\n",ans);
    }

    return 0;
}
