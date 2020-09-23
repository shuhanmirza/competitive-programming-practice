#include <stdio.h>
#include <math.h>

int main()
{
    int T;
    double r,L,area,area_circle,pi,w;

    scanf("%d",&T);
    pi = acos(-1);

    while(T--)
    {
        scanf("%lf",&L);

        w = (L * 6) / 10;
        r = L/5;

        area = L * w;
        area_circle = pi * r*r;

        printf("%0.2lf %0.2lf\n",area_circle,(area - area_circle));
    }
    return 0;
}
