#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,i,temp,check;
    int temp_cast,ans;

    while(1)
    {
        scanf("%lf %lf",&a,&b);;

        if(a == 0.0 && b == 0.0) break;

        else
        {
            ans=0;
            for( i = a ; i <= b ; i++)
            {
                temp = sqrt(i);

                temp_cast = (int)temp;

                if( ( temp - (double)temp_cast ) <= 0.0001)
                {
                    ans++;
                }
            }
        }

        printf("%d\n",ans);
    }
    return 0;
}
