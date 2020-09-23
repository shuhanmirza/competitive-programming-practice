#include <stdio.h>
#include <math.h>

int main()
{
    double pi,r,ans;
    int i,testcase,cas;

    scanf("%d",&testcase);

    pi = 2 * acos(0.0);

    for( cas = 1 ; cas <= testcase ; cas++ )
    {
        scanf("%lf",&r);

        ans = ( 2.0 * r ) * ( 2.0 * r ) ;
        ans = ans - ( pi * r * r );

        printf("Case %d: %0.2lf\n",cas,ans);
    }
    return 0;
}

