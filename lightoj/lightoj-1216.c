#include <stdio.h>

int main()
{
    double cas,T,r1,r2,h,p;
    double volume,pi,l,r_p;

    pi = 3.1415926535898;

    scanf("%lf",&T);

    for(cas = 1.0 ; cas <= T ;cas = cas + 1.0)
    {
        scanf("%lf %lf %lf %lf",&r1,&r2,&h,&p);

        l = ( r1 * h ) / ( r1 - r2 );
        r_p = r1 - ( ( (r1 - r2) * ( h - p ) ) / h ) ;

        volume = ( 0.33333333333333333334 * pi ) * ( ( ( r_p * r_p ) * ( l - h + p ) ) - ( ( r2 * r2) * ( l -h )) ) ;

        printf("Case %0.0lf: %lf\n" ,cas, volume);
    }

    return 0;
}
