#include <stdio.h>
#include <math.h>

int main()
{
    double u,v,a,s,t,x_1,x_2,x_3;
    int cas,input;

    cas = 1;

  while(1)
  {
      scanf("%d",&input);

      if(input == 0) break;

      else if( input == 1)
      {
          scanf("%lf %lf %lf",&u, &v, &t);

        s = (( u + v)/2 )*t;
        a = (v-u)/t;

        printf("Case %d: %0.3lf %0.3lf\n",cas,s,a);
      }

        else if( input == 2)
      {
          scanf("%lf %lf %lf",&u, &v, &a);

        t = (v-u) / a;
        s = ( (u+v)/2) * t;

        printf("Case %d: %0.3lf %0.3lf\n",cas,s,t);
      }

      else if( input == 3)
      {
          scanf("%lf %lf %lf",&u, &a, &s);

        v = (u*u) + (2*a*s);
        v = sqrt(v);
        t = (v-u) / a;

        printf("Case %d: %0.3lf %0.3lf\n",cas,v,t);
      }

            else if( input == 4)
            {
                scanf("%lf %lf %lf",&v, &a, &s);

                u = (v*v) - (2*a*s);
                u = sqrt(u);
                t = (v-u) / a;

                printf("Case %d: %0.3lf %0.3lf\n",cas,u,t);
            }

      cas++;
  }

    return 0;
}
